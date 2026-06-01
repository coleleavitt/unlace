void __fastcall sub_6909C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // [rsp+8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 152);
  v4 = a1;
  v2 = *(_QWORD *)(v1 + 16);
  v3 = *(_QWORD **)(v2 + 8);
  if ( v3 == *(_QWORD **)(v2 + 16) )
  {
    sub_690850(v2, &v4);
  }
  else
  {
    *v3 = a1;
    *(_QWORD *)(v2 + 8) += 8LL;
  }
}

