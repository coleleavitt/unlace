__int64 __fastcall sub_63D320(__int64 a1)
{
  void *v1; // rbp
  __int64 result; // rax

  v1 = *(void **)(a1 + 144);
  if ( v1 )
  {
    sub_63CF80(*(_QWORD **)(a1 + 144));
    sub_186B220(v1);
    *(_QWORD *)(a1 + 144) = 0;
    return sub_643660(a1 + 56);
  }
  return result;
}

