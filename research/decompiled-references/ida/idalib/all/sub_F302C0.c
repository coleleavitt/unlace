__int64 __fastcall sub_F302C0(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rbx
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // r13
  __int64 v8; // rax

  v2 = *(_BYTE *)(a2 + 48);
  v3 = *(_QWORD *)(a1 + 1096);
  if ( v2 == 20 )
    return sub_995540(*(_QWORD *)(a1 + 1096), " <orphan>");
  v4 = j__strlen(" parent: ");
  v5 = *(void **)(v3 + 32);
  v6 = v4;
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    v8 = sub_227BF10(v3, " parent: ", v4);
    return sub_F04EA0(v8, *(_BYTE *)(a2 + 48));
  }
  else
  {
    if ( v4 )
    {
      memcpy(v5, " parent: ", v4);
      *(_QWORD *)(v3 + 32) += v6;
      v2 = *(_BYTE *)(a2 + 48);
    }
    return sub_F04EA0(v3, v2);
  }
}
