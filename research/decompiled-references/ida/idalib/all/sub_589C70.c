void __fastcall sub_589C70(_QWORD *a1)
{
  char *v1; // rbx
  char *v2; // rbp

  v1 = (char *)a1[9];
  *a1 = &off_2B2EC58;
  while ( v1 )
  {
    v2 = v1;
    sub_589A30(*((_QWORD **)v1 + 3));
    v1 = *((char **)v1 + 2);
    free_idcv(v2 + 40);
    operator delete(v2, 0x48u);
  }
}
