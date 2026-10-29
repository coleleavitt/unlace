__int64 __fastcall sub_795C0(__int64 a1, void *a2)
{
  __int64 v2; // rax

  *(_QWORD *)(a1 + 48) = a2;
  v2 = sub_92240(a2, 0);
  *(_QWORD *)(a1 + 640) = v2;
  if ( v2 )
  {
    *(_BYTE *)(a1 + 850) = 1;
    *(_QWORD *)(a1 + 56) = sub_92640(v2);
    return 1;
  }
  else
  {
    sub_8FAE0(a2);
    sub_17D80((char **)a1);
    return 0;
  }
}

