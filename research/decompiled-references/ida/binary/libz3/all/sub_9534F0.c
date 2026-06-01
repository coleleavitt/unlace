__int64 __fastcall sub_9534F0(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 (*v2)(void); // rax

  v1 = *(_QWORD **)(*(_QWORD *)a1 + 1192LL);
  v2 = *(__int64 (**)(void))(*v1 + 120LL);
  if ( v2 == sub_955D30 )
    return *(unsigned __int8 *)(v1[2] + 215LL);
  else
    return v2();
}

