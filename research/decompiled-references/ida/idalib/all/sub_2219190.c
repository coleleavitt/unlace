__int64 __fastcall sub_2219190(int a1, __int64 *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // edx
  int v6; // [rsp+Ch] [rbp-1Ch] BYREF
  unsigned int *v7; // [rsp+10h] [rbp-18h] BYREF
  __int64 v8; // [rsp+18h] [rbp-10h] BYREF

  v2 = *a2;
  v6 = a1;
  v7 = (unsigned int *)&v6;
  v8 = v2;
  v3 = sub_22185F0(&v7, (unsigned __int64)&v7, &v8, v2 + 4, 0);
  v4 = 0;
  if ( !v3 )
  {
    v4 = 1;
    *a2 = v8;
  }
  return v4;
}
