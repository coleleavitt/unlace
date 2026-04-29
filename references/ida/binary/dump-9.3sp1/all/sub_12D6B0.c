__int64 __fastcall sub_12D6B0(_QWORD *a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 *v8; // r14
  _QWORD *v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v17[3] = __readfsqword(0x28u);
  if ( a2 != (unsigned __int8 *)a3 )
  {
    sub_11CDA0((__int64)a2);
    sub_123A40((__int64)a2, (unsigned __int8 *)a3, v5, v6);
  }
  v7 = a1[1];
  if ( !v7 )
  {
    if ( !under_debugger )
      sub_383060(52474);
    BUG();
  }
  v8 = *(unsigned __int64 **)(*(_QWORD *)(v7 + 480) + 112LL);
  if ( *(_BYTE *)a3 )
  {
    v9 = (_QWORD *)a1[5];
    v17[1] = 0;
    v17[0] = 0xFFFFFFFF00000000LL;
    v10 = a1[3];
    if ( a3 == v10 + 64 )
    {
      if ( *((_BYTE *)v9 + 64) )
      {
        v11 = v9 + 8;
        v12 = 1;
      }
      else
      {
        sub_11CDA0((__int64)v17);
        sub_123A40((__int64)v17, (unsigned __int8 *)a3, v15, v16);
        v13 = sub_12CD10((__int16 *)v17, v8, 1);
        if ( !(_BYTE)v13 )
          goto LABEL_10;
        v7 = a1[1];
        v12 = 1;
        v11 = v17;
      }
    }
    else
    {
      if ( a3 == v10 + 32 )
        v11 = v9 + 4;
      else
        v11 = v9 + 6;
      v12 = 0;
    }
    sub_1571F0(v7, a1[2], a2, a1[4], v11, v12);
    v13 = 1;
LABEL_10:
    sub_11CDA0((__int64)v17);
    return v13;
  }
  return sub_12AB50(a2, (__int64)v8, 2 * *(_DWORD *)(a3 + 4), 1);
}
