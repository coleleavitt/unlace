__int64 __fastcall sub_70B3E0(__int64 a1, void *a2)
{
  __int64 v2; // rax

  *(_QWORD *)(a1 + 48) = a2;
  v2 = open_linput(a2, 0);
  *(_QWORD *)(a1 + 640) = v2;
  if ( v2 )
  {
    *(_BYTE *)(a1 + 850) = 1;
    *(_QWORD *)(a1 + 56) = qlsize(v2);
    return 1;
  }
  else
  {
    get_errdesc(a2);
    sub_3573A0((char **)a1);
    return 0;
  }
}

