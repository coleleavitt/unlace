__int64 __fastcall sub_57FD40(__int64 a1, int a2)
{
  unsigned int v3; // ebp
  unsigned __int64 *v5; // rax
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // r12d
  unsigned int v9; // eax
  __int64 v10; // rdi
  int v11[4]; // [rsp+0h] [rbp-128h] BYREF
  int v12[2]; // [rsp+10h] [rbp-118h]
  int v13[2]; // [rsp+18h] [rbp-110h]
  int v14[2]; // [rsp+20h] [rbp-108h] BYREF
  int v15[2]; // [rsp+28h] [rbp-100h]
  __int64 v16; // [rsp+30h] [rbp-F8h]
  char v17; // [rsp+38h] [rbp-F0h] BYREF
  unsigned __int64 v18; // [rsp+F8h] [rbp-30h] BYREF

  v18 = __readfsqword(0x28u);
  v3 = sub_3B9110(*(_QWORD **)(a1 + 16), a2);
  if ( (~((unsigned __int16)sub_3B9AA0(*(_QWORD *)(a1 + 16), v3, 4) >> 8) & 6) == 0 )
  {
    *(_QWORD *)v14 = -1;
    v16 = 0;
    *(_QWORD *)v15 = 0xFFFFFFFFLL;
    v5 = (unsigned __int64 *)&v17;
    do
    {
      *(_WORD *)v5 = 0;
      v5 += 3;
      *((_WORD *)v5 - 11) = 0;
      *((_WORD *)v5 - 10) = 0;
      *((_DWORD *)v5 - 1) = 0;
      *((_WORD *)v5 - 9) = 0;
      *(v5 - 2) = 0;
      *((_DWORD *)v5 - 2) = 0;
    }
    while ( &v18 != v5 );
    v6 = sub_55A3A0(*(_QWORD **)(a1 + 16), (__int64)v14, v3);
    v7 = *(_QWORD *)(a1 + 16);
    if ( v6 )
    {
      v8 = v3 + v6;
      v9 = sub_3BCF60(v7, v3);
      if ( v8 != v9 )
      {
        if ( v9 < v8 )
        {
          v10 = *(_QWORD *)(a1 + 16);
          *(_OWORD *)v11 = 0;
          *(_QWORD *)v12 = 0;
          *(_QWORD *)v13 = 0;
          sub_3CC010(v10, v9, 4);
        }
        sub_3D0CF0(*(_QWORD *)(a1 + 16), 0, 0, 0, 0, v14[0], v15[0], v16);
        if ( *(_QWORD *)v12 )
          (*(void (__fastcall **)(int *, int *, __int64))v12)(v11, v11, 3);
      }
    }
    else
    {
      *(_OWORD *)v11 = 0;
      *(_QWORD *)v12 = 0;
      *(_QWORD *)v13 = 0;
      sub_3CC010(v7, v3, 1);
    }
  }
  return 0;
}

