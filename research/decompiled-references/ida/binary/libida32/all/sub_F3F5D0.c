__int64 __fastcall sub_F3F5D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  LOBYTE(v6) = sub_F3D400(a1, a2, a3, a4, a5, a6);
  v10 = v6;
  if ( !(_BYTE)v6 )
  {
    v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    LOBYTE(v10) = (_BYTE)v11 == 43 || (unsigned int)(v11 - 57) <= 1;
    if ( !(_BYTE)v10 )
    {
      v13 = sub_F3F480(a1, a2, v11, v7, v8, v9);
      v14 = v13;
      if ( v13 )
      {
        if ( (*((_BYTE *)v13 + 28) & 0x7Fu) - 59 <= 2 && (unsigned __int8)sub_B80430((__int64)v13) )
        {
          sub_6E4DB0((__int64 *)(v14[13] + 96LL), v14[13], v15, v16, v17, v18);
          return (*(_BYTE *)(v14[16] + 8LL) & 0x40) != 0;
        }
      }
    }
  }
  return v10;
}

