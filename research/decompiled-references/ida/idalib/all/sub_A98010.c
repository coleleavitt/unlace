unsigned __int64 __fastcall sub_A98010(__int64 a1)
{
  unsigned __int8 *v2; // rdi
  __int64 (*v3)(void); // rax
  unsigned int v4; // ebx

  v2 = *(unsigned __int8 **)(a1 + 17448);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 232LL);
  if ( (char *)v3 == (char *)sub_A55EA0 )
    v4 = v2[60];
  else
    v4 = v3();
  return v4 / (unsigned __int64)sub_A97FD0(a1);
}
