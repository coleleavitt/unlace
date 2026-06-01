__int64 __fastcall sub_8EB820(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 (*v6)(void); // rax

  v2 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 24LL);
  if ( v2
    && (v3 = *v2, (_DWORD)v3 != -1)
    && (v4 = *(_QWORD *)(a1 + 8672)) != 0
    && (unsigned int)v3 < *(_DWORD *)(v4 - 4)
    && (v5 = *(_QWORD *)(v4 + 8 * v3)) != 0
    && (v6 = *(__int64 (**)(void))(*(_QWORD *)v5 + 168LL), v6 != sub_893DF0) )
  {
    return v6();
  }
  else
  {
    return 0;
  }
}

