_QWORD *__fastcall sub_2065000(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r12
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r13
  unsigned int v20; // r14d
  void *v21[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+10h] [rbp-68h] BYREF
  __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+28h] [rbp-50h]
  const char *v25; // [rsp+30h] [rbp-48h]
  __int16 v26; // [rsp+40h] [rbp-38h]

  if ( a3 )
  {
    if ( !(unsigned __int8)sub_2247970(a2, a3, 10, &v23) )
    {
      v16 = v23;
      if ( v23 == (unsigned int)v23 )
      {
        *a4 = v23;
        if ( (unsigned int)(v16 - 1) <= 0xFFFFFE )
        {
          *a1 = 0;
          return a1;
        }
      }
    }
    v23 = a5;
    v26 = 773;
    v24 = a6;
    v25 = " must be a non-zero 24-bit integer";
    v17 = sub_2220490(a2);
    v19 = v18;
    v20 = v17;
    sub_2253560(v21, &v23);
    v12 = v20;
    v13 = v19;
  }
  else
  {
    v23 = a5;
    v26 = 773;
    v24 = a6;
    v25 = " component cannot be empty";
    v8 = sub_2220490(a1);
    v10 = v9;
    v11 = v8;
    sub_2253560(v21, &v23);
    v12 = v11;
    v13 = v10;
  }
  sub_22205D0(a1, v21, v12, v13);
  if ( v21[0] != &v22 )
    operator delete(v21[0]);
  return a1;
}
