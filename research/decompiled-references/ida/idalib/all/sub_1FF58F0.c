__int64 __fastcall sub_1FF58F0(__int64 a1, const void *a2, __int64 a3, const void *a4, size_t a5)
{
  unsigned int v7; // ebp
  int v8; // eax
  size_t v10; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v11; // [rsp+1Fh] [rbp-89h] BYREF
  _QWORD v12[4]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v13; // [rsp+40h] [rbp-68h]
  _QWORD v14[4]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v15; // [rsp+70h] [rbp-38h]

  if ( (a5 != a3 || (v7 = 1, a5) && (v10 = a5, v8 = memcmp(a2, a4, a5), a5 = v10, v8))
    && ((v14[0] = a4,
         v13 = 261,
         v15 = 261,
         v14[1] = a5,
         v12[0] = a2,
         v12[1] = a3,
         (unsigned int)sub_228C2E0(v12, v14, &v11))
     || (v7 = v11) == 0) )
  {
    return 0;
  }
  else
  {
    return v7;
  }
}
