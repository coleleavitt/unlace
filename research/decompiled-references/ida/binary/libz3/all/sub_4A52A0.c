__int64 __fastcall sub_4A52A0(__int64 *a1)
{
  __int64 *v2; // r13
  __int64 v3; // r15
  int v4; // eax
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // r14
  unsigned __int8 v8; // r12
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 *v11; // r9
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rax
  int v16; // edi
  unsigned int v17; // edx
  __int64 *v18; // rsi
  __int64 v19; // rdx
  __int64 *v20; // r9
  __int64 *i; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 result; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // r14
  char v29; // al
  unsigned int j; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v31; // [rsp+6h] [rbp-A2h]
  unsigned __int8 v32; // [rsp+7h] [rbp-A1h]
  unsigned __int8 v33; // [rsp+10h] [rbp-98h]
  _QWORD v34[4]; // [rsp+20h] [rbp-88h] BYREF
  void *v35; // [rsp+40h] [rbp-68h]
  void *ptr; // [rsp+58h] [rbp-50h]

  v2 = a1 + 10;
  sub_F8BB20(v34, a1[1], *a1);
LABEL_2:
  while ( (unsigned __int8)sub_F8BB00(v34) )
  {
    v3 = sub_F8BBA0(v34);
    v4 = *(_DWORD *)(v3 + 24);
    if ( !v4
      || (v7 = *a1,
          (v8 = (v4 == 1) & (*(_QWORD *)(v7 + 848) != sub_15D1F10(*(_QWORD *)(v3 + 8LL * (unsigned int)(v4 - 1) + 32)))) != 0) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 24LL);
      if ( !v5 )
        continue;
      v6 = *(_DWORD *)(v5 + 4);
      if ( v6 == 14 )
      {
        v13 = (__int64 *)a1[24];
        v14 = *(_QWORD *)(v3 + 8LL * (unsigned int)(*(_DWORD *)(v3 + 24) - 1) + 32);
        v15 = *((unsigned int *)a1 + 50);
        v16 = *(_DWORD *)(v14 + 12);
        v17 = v15 - 1;
        v15 *= 8;
        v18 = (__int64 *)((char *)v13 + v15);
        v19 = 8LL * (v16 & v17);
        v20 = &v13[(unsigned __int64)v19 / 8];
        if ( v19 != v15 )
        {
          for ( i = &v13[(unsigned __int64)v19 / 8]; v18 != i; ++i )
          {
            v22 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v22 + 12) == v16 && v14 == v22 )
              {
LABEL_22:
                sub_15D0A90(v2, v3, 1);
                goto LABEL_2;
              }
            }
            else if ( !v22 )
            {
              goto LABEL_21;
            }
          }
        }
        for ( ; v20 != v13; ++v13 )
        {
          v23 = *v13;
          if ( (unsigned __int64)*v13 > 1 )
          {
            if ( *(_DWORD *)(v23 + 12) == v16 && v14 == v23 )
              goto LABEL_22;
          }
          else if ( !v23 )
          {
            break;
          }
        }
LABEL_21:
        sub_15D0A90(a1 + 3, v3, 1);
      }
      else if ( v6 == 34 )
      {
        sub_15D0A90(a1 + 17, v3, 1);
      }
    }
    else
    {
      v9 = *(_DWORD *)(v3 + 24);
      if ( v9 )
      {
        v32 = 0;
        v25 = *a1;
        v31 = 0;
        for ( j = 0; ; ++j )
        {
          v26 = sub_15D1F10(*(_QWORD *)(v3 + 8LL * (v9 - 1) + 32));
          v27 = v9 - 1;
          if ( *(_QWORD *)(v25 + 848) == v26 )
            v27 = v9;
          if ( j >= v27 )
            break;
          v28 = *(_QWORD *)(v3 + 8LL * j + 32);
          v33 = v8 | sub_15D37A0(a1 + 3, v28);
          v31 |= sub_15D37A0(a1 + 10, v28);
          v29 = sub_15D37A0(a1 + 17, v28);
          v9 = *(_DWORD *)(v3 + 24);
          v11 = a1 + 3;
          v8 = v29 | v32;
          if ( !v9 )
          {
            v10 = v33;
            goto LABEL_11;
          }
          v32 |= v29;
          v25 = *a1;
          v8 = v33;
        }
        v10 = v8;
        v11 = a1 + 3;
        v8 = v32;
      }
      else
      {
        v31 = 0;
        v10 = 0;
        v11 = a1 + 3;
      }
LABEL_11:
      v12 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 24LL);
      if ( v12 )
        v8 &= *(_DWORD *)(v12 + 4) != 35;
      sub_15D0A90(v11, v3, v10);
      sub_15D0A90(a1 + 10, v3, v31);
      sub_15D0A90(a1 + 17, v3, v8);
    }
  }
  v34[1] = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v35 )
    sub_186B220(v35);
  result = v34[0];
  if ( v34[0] )
    return sub_186B220((void *)(v34[0] - 8LL));
  return result;
}

