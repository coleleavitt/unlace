__int64 sub_E3190()
{
  __int64 v0; // r12
  __int64 v1; // rbp
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rbp
  _QWORD *v5; // rax
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // rbp
  char v10; // bl
  time_t v11; // rbp
  __int64 v12; // r13
  _QWORD *v13; // rdi
  int v14; // eax
  int v15; // edi
  __int64 v16; // [rsp+8h] [rbp-60h] BYREF
  int v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int128 v19; // [rsp+20h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_debugger_on() || !(_QWORD)xmmword_252598 )
    return v20 - __readfsqword(0x28u);
  v0 = xmmword_252268;
  v1 = 0;
  if ( (_QWORD)xmmword_252268 )
  {
    do
    {
      v2 = 3 * v1++;
      sub_BEAD0(qword_252260 + 16 * v2);
    }
    while ( v0 != v1 );
    v3 = xmmword_252268;
    if ( (_QWORD)xmmword_252268 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(qword_252260 + 48 * v4);
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
  *(_QWORD *)&xmmword_252268 = 0;
  if ( (dword_245190 & 2) != 0 )
    return v20 - __readfsqword(0x28u);
  v7 = getinf();
  if ( v7 == -1 )
  {
    v10 = 8;
    v11 = time(nullptr);
    if ( !dword_25274C )
      return v20 - __readfsqword(0x28u);
    while ( 1 )
    {
      if ( byte_2526BA || time(nullptr) - v11 > 1 )
        return v20 - __readfsqword(0x28u);
      if ( dword_25274C > 0 && (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
        goto LABEL_45;
      v15 = *(_DWORD *)qword_252590;
      v17 = -2;
      v18 = -1;
      v19 = 0;
      if ( !(unsigned __int8)sub_CFEA0(v15, dword_245174, (__int64)&v17) )
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
        v13 = qword_252758;
        if ( qword_252758 )
        {
          *(_QWORD *)qword_252758 = v12;
          v13[1] = &v16;
          v13[2] = 1;
          if ( (int)sub_CDCF0((__int64)v13, 19) > 0 && *((_QWORD *)qword_252758 + 2) == 1 )
            return v20 - __readfsqword(0x28u);
        }
      }
LABEL_35:
      v14 = sub_E2ED0(v10, 2);
      if ( v14 >= 0 )
      {
        v10 = 8 * (v14 != 0);
        if ( dword_25274C )
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
  if ( dword_25274C <= 0 || (*(_BYTE *)(dbg + 32LL) & 0x40) == 0 )
  {
    v8 = *(_DWORD *)qword_252590;
    v17 = -2;
    v18 = -1;
    v19 = 0;
    if ( (unsigned __int8)sub_CFEA0(v8, dword_245174, (__int64)&v17) )
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
  if ( (unsigned int)sub_CE160(qword_252590, v7, 2, nullptr, 0, 0) != 1 )
    return v20 - __readfsqword(0x28u);
  return sub_E2ED0(8, 2);
}

