__int64 __fastcall sub_9F4EB0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // eax

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8656LL);
  if ( v4
    && (v6 = *a3, (unsigned int)v6 < *(_DWORD *)(v4 - 4))
    && (v7 = *(_QWORD *)(v4 + 8 * v6)) != 0
    && (unsigned int)sub_B39350(v7, *(unsigned int *)(a2 + 8)) != -1 )
  {
    v8 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8656LL) + 8LL * *a3), *(unsigned int *)(a2 + 8));
    sub_9F4950(a1, (_QWORD *)a2, v8);
    return a1;
  }
  else
  {
    sub_B28750(a1);
    return a1;
  }
}

