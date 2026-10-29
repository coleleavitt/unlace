__int64 __fastcall sub_AF7E0(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 zip_linput; // r13
  __int64 v8; // r12
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r14
  char v12; // al
  unsigned __int8 v15; // [rsp+13h] [rbp-85h]
  int v16; // [rsp+14h] [rbp-84h]
  int v17; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int64 v18; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h]
  _QWORD v20[11]; // [rsp+40h] [rbp-58h] BYREF

  v20[3] = __readfsqword(0x28u);
  zip_linput = create_zip_linput();
  v16 = dword_2440D8 & 0x10;
  if ( (dword_2440D8 & 0x10) != 0 )
    dword_2440D8 &= ~0x10u;
  v19 = a4;
  v18 = zip_linput;
  v15 = sub_A9B20((__int64)a1, (__int64)&v18, &v17, a5);
  if ( v15 )
  {
    v8 = v17;
    v9 = a4;
    v10 = zip_linput;
    v20[0] = 1;
    v20[1] = 0;
    v20[2] = 0;
    if ( !v17 )
      goto LABEL_15;
    v11 = 0;
    while ( 1 )
    {
      v18 = v10;
      v19 = v9;
      v12 = sub_AEFE0(a1, (__int64)&v18, (__int64)v20);
      v10 = v18;
      v9 = v19;
      if ( !v12 )
        break;
      if ( ++v11 == v8 )
        goto LABEL_15;
    }
    if ( v11 == v8 )
    {
LABEL_15:
      if ( !v9 )
        goto LABEL_19;
      while ( qlseek() < v9 )
      {
        if ( under_debugger )
          BUG();
        interr();
LABEL_19:
        v9 = qlsize();
      }
    }
    else
    {
      if ( a5 )
        sub_94360(a5);
      v15 = 0;
    }
  }
  if ( v16 )
    dword_2440D8 |= 0x10u;
  close_linput();
  return v15;
}

