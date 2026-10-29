__int64 __fastcall sub_56E100(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 i; // rbx
  int v11; // eax
  int v12; // eax
  int v14; // eax
  __int64 v15; // [rsp+8h] [rbp-60h]
  _BYTE v16[72]; // [rsp+20h] [rbp-48h] BYREF

  sub_644D80(v16, "remove_fact", 2);
  sub_56B5A0(a1, a2);
  v2 = *(_QWORD *)(a1 + 152);
  v3 = sub_17E8B20(v2 + **(_QWORD **)(a1 + 96), *(unsigned int *)(a1 + 104), 0);
  v4 = *(unsigned int *)(a1 + 136);
  v5 = *(_QWORD *)(a1 + 128);
  v6 = v4 - 1;
  v4 *= 16;
  v7 = v5 + v4;
  v8 = 16LL * (v3 & v6);
  v9 = v5 + v8;
  if ( v8 != v4 )
  {
    for ( i = v5 + v8; v7 != i; i += 16 )
    {
      v11 = *(_DWORD *)(i + 4);
      if ( v11 == 2 )
      {
        if ( v3 == *(_DWORD *)i )
        {
          v15 = v7;
          v12 = memcmp(
                  (const void *)(*(_QWORD *)(i + 8) + **(_QWORD **)(a1 + 112)),
                  (const void *)(**(_QWORD **)(a1 + 112) + v2),
                  *(unsigned int *)(a1 + 120));
          v7 = v15;
          if ( !v12 )
          {
LABEL_8:
            sub_56D9F0((unsigned int *)(a1 + 72), *(_QWORD *)(i + 8));
            sub_5692F0(a1);
            return sub_644EE0(v16);
          }
        }
      }
      else if ( !v11 )
      {
        return sub_644EE0(v16);
      }
    }
  }
  for ( ; v9 != v5; v5 += 16 )
  {
    v14 = *(_DWORD *)(v5 + 4);
    if ( v14 == 2 )
    {
      if ( v3 == *(_DWORD *)v5
        && !memcmp(
              (const void *)(*(_QWORD *)(v5 + 8) + **(_QWORD **)(a1 + 112)),
              (const void *)(**(_QWORD **)(a1 + 112) + v2),
              *(unsigned int *)(a1 + 120)) )
      {
        i = v5;
        goto LABEL_8;
      }
    }
    else if ( !v14 )
    {
      return sub_644EE0(v16);
    }
  }
  return sub_644EE0(v16);
}

