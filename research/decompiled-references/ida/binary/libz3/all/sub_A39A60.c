__int64 __fastcall sub_A39A60(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r13d
  char *v3; // rbp
  unsigned int **v4; // r15
  unsigned int v5; // eax
  void *v6; // rbx
  int v8[4]; // [rsp+10h] [rbp-168h] BYREF
  _BYTE v9[16]; // [rsp+20h] [rbp-158h] BYREF
  void *ptr; // [rsp+30h] [rbp-148h] BYREF
  char v11[8]; // [rsp+38h] [rbp-140h]
  int v12[78]; // [rsp+40h] [rbp-138h] BYREF

  v2 = sub_A39650(a1, (__int64)a2);
  ptr = v12;
  *(_QWORD *)v11 = 0x1000000000LL;
  sub_9E98E0((__int64)v8, a1, (__int64)a2, (__int64)&ptr);
  v3 = (char *)ptr + 16 * *(unsigned int *)v11;
  if ( v3 != ptr )
  {
    v4 = (unsigned int **)ptr;
    do
    {
      v5 = sub_A39800(a1, a2, v4);
      if ( (_BYTE)v5 )
      {
        ++*(_DWORD *)(a1 + 372);
        v2 = v5;
      }
      v4 += 2;
    }
    while ( v3 != (char *)v4 );
  }
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v8);
  sub_182CBA0(v6, v9);
  if ( ptr != v12 && ptr )
    sub_186B220(ptr);
  return v2;
}

