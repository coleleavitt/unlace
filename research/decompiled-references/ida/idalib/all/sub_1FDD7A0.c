void __fastcall sub_1FDD7A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  v3 = *(_QWORD *)(a1 + 272);
  if ( v3 && !(unsigned __int8)sub_1FD3510(v3, a2) )
  {
    v4 = *(unsigned int *)(a1 + 232);
    if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 236) )
    {
      sub_2237220(a1 + 224, a1 + 240, v4 + 1, 8);
      v4 = *(unsigned int *)(a1 + 232);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8 * v4) = a2;
    ++*(_DWORD *)(a1 + 232);
  }
}
