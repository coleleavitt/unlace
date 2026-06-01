__int64 __fastcall sub_F03FE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // r12
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  if ( *(_QWORD *)(a2 + 40) )
  {
    v3 = sub_971800(*(_QWORD *)(a1 + 1096), " ");
    sub_9717A0(
      v3,
      (const void *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) + 16LL),
      **(unsigned int **)(*(_QWORD *)(a2 + 40) + 16LL));
    v2 = *(_QWORD *)(a1 + 1096);
  }
  v4 = j__strlen(" ");
  v5 = *(void **)(v2 + 32);
  v6 = v4;
  if ( v4 > *(_QWORD *)(v2 + 24) - (_QWORD)v5 )
  {
    v8 = sub_22581D0(v2, " ", v4);
    return sub_2257BF0(v8, *(int *)(a2 + 48));
  }
  else
  {
    if ( v4 )
    {
      memcpy(v5, " ", v4);
      *(_QWORD *)(v2 + 32) += v6;
    }
    return sub_2257BF0(v2, *(int *)(a2 + 48));
  }
}

