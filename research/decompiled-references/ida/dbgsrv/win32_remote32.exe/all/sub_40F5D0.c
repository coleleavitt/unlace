/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F5D0
// Address: 0x0040F5D0

//----- (0040F5D0) --------------------------------------------------------
_DWORD *__userpurge sub_40F5D0@<eax>(int a1@<ebx>, __m128i a2@<xmm0>, int a3, int a4, char *a5, _DWORD *a6)
{
  int v6; // edi
  char *v7; // eax
  bool v8; // cc
  char *v9; // ecx
  CHAR *v10; // esi
  int *v11; // eax
  int *v12; // ebx
  int *v13; // eax
  int v14; // esi
  void *v15; // eax
  _DWORD *result; // eax
  void *v17; // [esp-4h] [ebp-20h]

  v6 = a3;
  if ( (_BYTE)a5 )
  {
    if ( !*(_DWORD *)(a3 + 200) && (*(_DWORD *)(a3 + 336) & 0x80000) != 0 && !sub_455100() )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(30191);
    }
    v7 = sub_43D030((char *)v6);
    v8 = *(_DWORD *)(v6 + 576) <= 1u;
    v9 = v7;
    a5 = v7;
    if ( !v8 )
    {
      v10 = (CHAR *)MultiByteStr;
      if ( *(_DWORD *)(v6 + 576) )
        v10 = *(CHAR **)(v6 + 572);
      v11 = sub_45C5A0(a1, v6, a2, v10, 0);
      v12 = v11;
      if ( v11 )
      {
        sub_412210(
          v6,
          a2,
          v10,
          (int)v11,
          *(int (__stdcall ***)(_DWORD, __m128i *, __m128i *))(v6 + 584),
          (int (__stdcall **)(_DWORD, __m128i *, __m128i *))a5,
          nullptr);
        sub_45C550((int)v12, v6, v12);
      }
      if ( *(_DWORD *)(v6 + 572) )
      {
        v17 = *(void **)(v6 + 572);
        *(_DWORD *)(v6 + 576) = 0;
        sub_453A20(v17);
        *(_DWORD *)(v6 + 572) = 0;
        *(_DWORD *)(v6 + 580) = 0;
      }
      v9 = a5;
    }
    v13 = *(int **)(v6 + 564);
    v14 = *v13;
    if ( (int *)*v13 != v13 )
    {
      while ( 1 )
      {
        sub_411BC0(
          v6,
          a2,
          (int *)(v6 + 532),
          *(int (__stdcall ***)(_DWORD, __m128i *, __m128i *))(v14 + 16),
          (int (__stdcall **)(_DWORD, __m128i *, __m128i *))v9,
          nullptr);
        a3 = v14;
        sub_40B5E0(&a3);
        v15 = (void *)sub_40BA90((int ***)(v6 + 564), v14);
        sub_4627F2(v15);
        v14 = a3;
        if ( a3 == *(_DWORD *)(v6 + 564) )
          break;
        v9 = a5;
      }
    }
  }
  result = a6;
  if ( a6 )
    return sub_417600((_DWORD *)v6, a6);
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
