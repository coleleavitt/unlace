__int64 __fastcall sub_4DDA10(__int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall ****v2)(_QWORD); // rbx
  __int64 (__fastcall ****i)(_QWORD); // rbp
  __int64 (__fastcall ***v4)(_QWORD); // rdi

  sub_629B30(a1 + 8);
  result = *(_QWORD *)(a1 + 80);
  v2 = *(__int64 (__fastcall *****)(_QWORD))result;
  if ( *(_QWORD *)result )
  {
    result = *((unsigned int *)v2 - 1);
    for ( i = &v2[result]; i != v2; result = (**v4)(v4) )
      v4 = *v2++;
  }
  return result;
}

