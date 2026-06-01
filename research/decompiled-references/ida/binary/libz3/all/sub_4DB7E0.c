__int64 __fastcall sub_4DB7E0(__int64 (__fastcall *****a1)(_QWORD))
{
  __int64 (__fastcall ****v1)(_QWORD); // rbx
  __int64 result; // rax
  __int64 (__fastcall ****i)(_QWORD); // rbp
  __int64 (__fastcall ***v4)(_QWORD); // rdi

  v1 = *a1;
  if ( *a1 )
  {
    result = *((unsigned int *)v1 - 1);
    for ( i = &v1[result]; i != v1; result = (**v4)(v4) )
      v4 = *v1++;
  }
  return result;
}

