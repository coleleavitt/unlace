__int64 __fastcall sub_3B18E0(unsigned __int64 *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // r13
  unsigned __int64 v5; // r12
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  _QWORD *v9; // rdi
  __int64 v10; // r14
  unsigned __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  char tinfo_details; // [rsp+Fh] [rbp-79h]
  _QWORD *v18; // [rsp+10h] [rbp-78h] BYREF
  __int128 v19; // [rsp+18h] [rbp-70h]
  __int128 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+38h] [rbp-50h]
  int v22; // [rsp+40h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v2 = *(_DWORD *)(a2 + 224);
  v3 = *(_QWORD *)(a2 + 32);
  v23 = __readfsqword(0x28u);
  if ( v2 > 0 && (v2 & 7) != 0 )
    return -1;
  if ( v3 == -1 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    v8 = *(_QWORD *)(a2 + 216);
    v18 = nullptr;
    v21 = 0;
    v22 = 1;
    v19 = 0;
    v20 = 0;
    tinfo_details = get_tinfo_details(v7, 13, &v18);
    v9 = v18;
    if ( tinfo_details )
    {
      v10 = v19;
      if ( v2 > 0 )
        v8 += v2;
      if ( (_QWORD)v19 )
      {
        v11 = v18;
        v12 = 0;
        do
        {
          if ( v8 < *v11 )
          {
            v3 = v12;
            v5 = (*v11 - v8) >> 3;
            tinfo_details = a1 != nullptr;
            if ( !v18 )
              goto LABEL_22;
            goto LABEL_15;
          }
          ++v12;
          v11 += 18;
        }
        while ( v12 != (_QWORD)v19 );
        if ( !v18 )
          return v3;
        tinfo_details = 0;
        v5 = 0;
LABEL_15:
        v13 = 0;
        do
        {
          v14 = &v9[18 * v13];
          clear_tinfo_t(v14 + 8);
          v15 = v14[5];
          if ( v15 )
          {
            v14[6] = 0;
            qfree(v15, &byte_9[4]);
          }
          v16 = v14[2];
          if ( v16 )
          {
            v14[3] = 0;
            qfree(v16, &byte_9[4]);
          }
          ++v13;
          v9 = v18;
        }
        while ( v13 != v10 );
        *(_QWORD *)&v19 = 0;
        qfree(v18, &byte_9[4]);
LABEL_22:
        if ( tinfo_details )
          goto LABEL_5;
        return v3;
      }
      if ( !v18 )
        return -1;
    }
    else
    {
      if ( !v18 )
        return -1;
      v10 = v19;
      v5 = 0;
      if ( (_QWORD)v19 )
        goto LABEL_15;
    }
    qfree(v18, &byte_9[4]);
    return v3;
  }
  v5 = 0;
  if ( a1 )
LABEL_5:
    *a1 = v5;
  return v3;
}
