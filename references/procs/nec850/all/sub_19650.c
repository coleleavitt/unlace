__int64 __fastcall sub_19650(__int64 a1, const void *a2, unsigned __int8 *a3, _QWORD *a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // [rsp+0h] [rbp-198h] BYREF
  __int128 v9; // [rsp+8h] [rbp-190h]
  _BYTE v10[360]; // [rsp+20h] [rbp-178h] BYREF
  unsigned __int64 v11; // [rsp+188h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  qmemcpy(v10, a2, sizeof(v10));
  v5 = *(_QWORD *)(a1 + 16);
  v8 = 0;
  v9 = 0;
  v6 = sub_19030(v5, (__int64)v10, (__int64)&v8, a3, a4, a5);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v6;
}
