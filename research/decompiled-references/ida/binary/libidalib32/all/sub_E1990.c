__int64 sub_E1990()
{
  __int64 v0; // rbp
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rbx
  _QWORD *v5; // rax
  unsigned int v7; // ebx
  int v8; // edi
  int v9; // r12d
  char v10; // bl
  time_t v11; // rbp
  int v12; // r13d
  _QWORD *v13; // rdi
  int v14; // eax
  int v15; // edi
  int v16; // [rsp+Ch] [rbp-5Ch] BYREF
  int v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int128 v19; // [rsp+20h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_debugger_on() || !(_QWORD)xmmword_251418 )
    return v20 - __readfsqword(0x28u);
  v0 = xmmword_251188;
  v1 = 0;
  if ( (_QWORD)xmmword_251188 )
  {
    do
    {
      v2 = 5 * v1++;
      sub_BE430(qword_251180 + 8 * v2);
    }
    while ( v0 != v1 );
    v3 = xmmword_251188;
    if ( (_QWORD)xmmword_251188 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(qword_251180 + 40 * v4);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
        }
        ++v4;
      }
      while ( v3 != v4 );
    }
  }
  *(_QWORD *)&xmmword_251188 = 0;
  if ( (dword_24412C & 2) != 0 )
    return v20 - __readfsqword(0x28u);
  v7 = getinf();
  if ( v7 == -1 )
  {
    v10 = 8;
    v11 = time(nullptr);
    if ( !dword_2515A4 )
      return v20 - __readfsqword(0x28u);
    while ( 1 )
    {
      if ( byte_251536 || time(nullptr) - v11 > 1 )
        return v20 - __readfsqword(0x28u);
      if ( dword_2515A4 > 0 && (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
        goto LABEL_45;
      v15 = *(_DWORD *)qword_251410;
      v17 = -2;
      v18 = -1;
      v19 = 0;
      if ( !(unsigned __int8)sub_CE8E0(v15, dword_24411C, (__int64)&v17) )
        break;
      v12 = v18;
      if ( v17 >= -1 && v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree();
      }
      v16 = v12;
      if ( v12 != -1 )
      {
        v13 = qword_2515B0;
        if ( qword_2515B0 )
        {
          *(_DWORD *)qword_2515B0 = v12;
          v13[1] = &v16;
          v13[2] = 1;
          if ( (int)sub_CC780((__int64)v13, 19) > 0 && *((_QWORD *)qword_2515B0 + 2) == 1 )
            return v20 - __readfsqword(0x28u);
        }
      }
LABEL_35:
      v14 = sub_E16D0(v10, 2);
      if ( v14 >= 0 )
      {
        v10 = 8 * (v14 != 0);
        if ( dword_2515A4 )
          continue;
      }
      return v20 - __readfsqword(0x28u);
    }
    if ( v17 >= -1 && v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree();
    }
LABEL_45:
    v16 = -1;
    goto LABEL_35;
  }
  if ( dword_2515A4 <= 0 || (*(_BYTE *)(dbg + 32LL) & 0x40) == 0 )
  {
    v8 = *(_DWORD *)qword_251410;
    v17 = -2;
    v18 = -1;
    v19 = 0;
    if ( (unsigned __int8)sub_CE8E0(v8, dword_24411C, (__int64)&v17) )
    {
      v9 = v18;
      if ( v17 >= -1 && v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree();
      }
      if ( v7 == v9 )
        return v20 - __readfsqword(0x28u);
    }
    else if ( v17 >= -1 )
    {
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree();
      }
    }
  }
  if ( (unsigned int)sub_CCBE0(qword_251410, v7, 2, nullptr, 0, 0) != 1 )
    return v20 - __readfsqword(0x28u);
  return sub_E16D0(8, 2);
}

