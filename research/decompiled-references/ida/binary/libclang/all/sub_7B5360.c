unsigned __int64 __fastcall sub_7B5360(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rdi
  __int64 v5; // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_7B4380 )
  {
    if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
    {
      v5 = sub_798D40(a1);
      *(_QWORD *)(a1 + 112) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 18200) + 40LL))(
                                *(_QWORD *)(v5 + 18200),
                                *(_QWORD *)(a1 + 112) >> 1);
    }
    v3 = *(_QWORD *)(a1 + 112);
  }
  else
  {
    v3 = v2();
  }
  if ( v3 )
    return ((unsigned __int64)(unsigned int)sub_AC7460(v3) << 32) | *(unsigned int *)(a1 + 24);
  else
    return ((unsigned __int64)*(unsigned int *)(a1 + 108) << 32) | *(unsigned int *)(a1 + 24);
}

