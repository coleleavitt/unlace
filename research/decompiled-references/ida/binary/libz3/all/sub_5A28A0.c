__int64 __fastcall sub_5A28A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 *v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h] BYREF
  __int64 *v13; // [rsp+18h] [rbp-20h]

  v11 = 0;
  sub_5A2520((_QWORD *)a1, a2, &v11);
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 104) + 144LL))(*(_QWORD *)(a1 + 104), &v11);
  if ( (_BYTE)v2 )
  {
    sub_4D6590(&v12, *(__int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 8LL));
    sub_5A09A0(a1, a2, &v12);
    v4 = 0x7FFFFFFF8LL;
    if ( v11 )
      v4 = 8LL * (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * *(unsigned int *)(v11 + v4));
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 56LL))(v5, &v12);
    v7 = v13;
    v2 = v6;
    if ( v13 )
    {
      v8 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
      if ( (unsigned __int64)v13 >= v8 )
        goto LABEL_15;
      do
      {
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
          {
            if ( (*(_DWORD *)(v9 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v7 >= v8 )
            goto LABEL_14;
        }
        sub_15D7BC0(v12, v9);
        ++v7;
      }
      while ( (unsigned __int64)v7 < v8 );
LABEL_14:
      v7 = v13;
      if ( v13 )
LABEL_15:
        sub_186B220(v7 - 1);
    }
  }
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  return v2;
}

