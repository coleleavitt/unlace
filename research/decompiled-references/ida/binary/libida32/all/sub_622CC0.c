unsigned __int64 __fastcall sub_622CC0(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  __int64 v7; // rsi
  unsigned int v9; // esi
  _DWORD *v10; // r8
  _DWORD *v11; // rdx
  char v12; // cl
  __int64 v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+8h] [rbp-30h]
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  if ( (dword_2CA24C8 & 0x200000) != 0 )
  {
    v9 = a3 - (_DWORD)a2;
    v10 = &v17;
    v17 = nullptr;
    if ( (unsigned __int64)(a3 - (_QWORD)a2) > 0xC )
      v9 = 12;
    LODWORD(v18) = 0;
    v11 = a2;
    v12 = v9;
    if ( v9 >= 8 )
    {
      v14 = v9 & 8;
      LODWORD(v15) = 0;
      do
      {
        v16 = (unsigned int)v15;
        v15 = (unsigned int)(v15 + 8);
        *(_DWORD **)((char *)&v17 + v16) = *(_DWORD **)((char *)a2 + v16);
      }
      while ( (unsigned int)v15 < v14 );
      v10 = (_DWORD *)((char *)&v17 + v15);
      v11 = (_DWORD *)((char *)a2 + v15);
    }
    v13 = 0;
    if ( (v12 & 4) != 0 )
    {
      *v10 = *v11;
      v13 = 4;
      if ( (v12 & 2) == 0 )
      {
LABEL_9:
        if ( (v12 & 1) == 0 )
        {
LABEL_10:
          *(_QWORD *)a1 = v17;
          *(_QWORD *)(a1 + 8) = (int)v18;
          return v19 - __readfsqword(0x28u);
        }
LABEL_16:
        *((_BYTE *)v10 + v13) = *((_BYTE *)v11 + v13);
        *(_QWORD *)a1 = v17;
        *(_QWORD *)(a1 + 8) = (int)v18;
        return v19 - __readfsqword(0x28u);
      }
    }
    else if ( (v12 & 2) == 0 )
    {
      goto LABEL_9;
    }
    *(_WORD *)((char *)v10 + v13) = *(_WORD *)((char *)v11 + v13);
    v13 += 2;
    if ( (v12 & 1) == 0 )
      goto LABEL_10;
    goto LABEL_16;
  }
  v18 = a3;
  v17 = a2;
  v4 = unpack_dd(&v17);
  *(_DWORD *)a1 = v4;
  v5 = v4;
  v6 = unpack_dd(&v17);
  v7 = v18;
  *(_DWORD *)(a1 + 4) = v6 + v5;
  *(_QWORD *)(a1 + 8) = unpack_dq(&v17, v7);
  return v19 - __readfsqword(0x28u);
}

