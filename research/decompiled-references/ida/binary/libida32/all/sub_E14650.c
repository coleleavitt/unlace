__int64 __fastcall sub_E14650(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE *v5; // rax

  v3 = *a1;
  if ( a2 >= 0 )
    return sub_2257BF0(v3, a2);
  v5 = *(_BYTE **)(v3 + 32);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(v3 + 24) )
  {
    sub_2257CD0(v3, 110);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v5 + 1;
    *v5 = 110;
  }
  return sub_2257BF0(*a1, -a2);
}

