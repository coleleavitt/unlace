void __fastcall sub_447830(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r13
  __int64 v4; // rbp

  v2 = *(__int64 **)(a1 + 24);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    while ( v3 != v2 )
    {
      v4 = *v2;
      if ( (unsigned __int8)sub_15D37A0(a1 + 32, a2) )
        break;
      ++v2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, a2);
    }
  }
}

