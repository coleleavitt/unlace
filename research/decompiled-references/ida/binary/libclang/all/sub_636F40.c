void __fastcall sub_636F40(__int64 a1)
{
  void *v2; // rdi
  _QWORD v3[4]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v4; // [rsp+20h] [rbp-18h]

  if ( !*(_QWORD *)(a1 + 8) )
  {
    v2 = *(void **)a1;
    if ( *(_QWORD *)a1 == a1 + 16 )
      return;
    goto LABEL_3;
  }
  v3[0] = a1;
  v4 = 260;
  sub_2638520(v3, 1);
  v2 = *(void **)a1;
  if ( *(_QWORD *)a1 != a1 + 16 )
LABEL_3:
    operator delete(v2, *(_QWORD *)(a1 + 16) + 1LL);
}

