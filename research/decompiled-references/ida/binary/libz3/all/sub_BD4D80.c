__int64 __fastcall sub_BD4D80(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r14
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 *v8; // rbx
  __int64 *v9; // r12
  _DWORD *v10; // rax

  v1 = *(_QWORD *)(a1 + 592);
  if ( v1 )
  {
    v2 = v1 + 8LL * *(unsigned int *)(v1 - 4);
    if ( v1 != v2 )
    {
      while ( 1 )
      {
        v3 = *(__int64 **)(*(_QWORD *)v1 + 56LL);
        if ( v3 )
        {
          v4 = &v3[*((unsigned int *)v3 - 1)];
          if ( v4 != v3 )
            break;
        }
LABEL_9:
        v1 += 8;
        if ( v2 == v1 )
          goto LABEL_10;
      }
      while ( (unsigned __int8)sub_8EB820(*(_QWORD *)(a1 + 16), *v3) )
      {
        if ( v4 == ++v3 )
          goto LABEL_9;
      }
      return 1;
    }
  }
LABEL_10:
  v6 = *(_QWORD *)(a1 + 600);
  if ( v6 )
  {
    v7 = v6 + 8LL * *(unsigned int *)(v6 - 4);
    if ( v7 != v6 )
    {
      while ( 1 )
      {
        v8 = *(__int64 **)(*(_QWORD *)v6 + 56LL);
        if ( v8 )
        {
          v9 = &v8[*((unsigned int *)v8 - 1)];
          if ( v9 != v8 )
            break;
        }
LABEL_21:
        v6 += 8;
        if ( v7 == v6 )
          return 0;
      }
      while ( 1 )
      {
        v10 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)*v8 + 16LL) + 24LL);
        if ( (!v10 || *(_DWORD *)(a1 + 8) != *v10 || v10[1] != 4)
          && !(unsigned __int8)sub_8EB820(*(_QWORD *)(a1 + 16), *v8) )
        {
          return 1;
        }
        if ( v9 == ++v8 )
          goto LABEL_21;
      }
    }
  }
  return 0;
}

