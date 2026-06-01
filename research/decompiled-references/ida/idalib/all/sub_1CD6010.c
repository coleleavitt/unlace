unsigned __int64 __fastcall sub_1CD6010(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        unsigned int a9,
        _QWORD *a10,
        char a11)
{
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r15
  unsigned __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rbp
  unsigned int v22; // eax
  __int64 v23; // [rsp-8h] [rbp-40h]

  v13 = sub_1CD4E00(a1, a2, a3, a4, a5, a6, a7, a8, a9, a11);
  v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v18 = v13;
  v19 = sub_A81BC0(*(_QWORD **)(a1 + 248), v13, 0, v23, v14, v15);
  *a10 = v19;
  if ( *(_BYTE *)(*(_QWORD *)v16 + 16LL) == 20 )
  {
    *((_DWORD *)v19 + 2) = a3;
    v19[2] = a5;
    *((_DWORD *)v19 + 6) = a9;
  }
  else
  {
    v20 = *v19;
    v21 = v19 + 1;
    if ( (unsigned __int8)(*(_WORD *)(*v19 + 18LL) >> 3) != 6 || *(_QWORD *)(v20 + 32) )
    {
      *((_DWORD *)v19 + 2) = a3;
      if ( (unsigned __int8)(*(_WORD *)(v20 + 18) >> 3) != 6 || *(_QWORD *)(v20 + 32) )
      {
        v19[2] = a5;
        if ( (unsigned __int8)(*(_WORD *)(v20 + 18) >> 3) != 6 || *(_QWORD *)(v20 + 32) )
          v21 = v19 + 3;
      }
    }
    v22 = sub_F6C520(*(_QWORD *)(v20 + 40));
    *(_DWORD *)(v22 * ((v21 != nullptr) + ((unsigned __int64)v21 - (v21 != nullptr)) / v22)) = a9;
  }
  return v18;
}
