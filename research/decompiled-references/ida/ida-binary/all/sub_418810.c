__int64 __fastcall hvui_common_t__::vfunc_2(_QWORD *a1, const char *a2, __int64 a3)
{
  unsigned int v5; // edx
  _DWORD *v6; // rdi
  __int64 v7; // rbp
  __int64 v9; // rbp
  unsigned int v10; // edx
  const char **v11; // rcx
  const char *v12; // r12
  size_t v13; // rax
  size_t v14; // rbp
  void *v15; // rdi
  size_t v16; // r13
  __int64 v17; // rax

  v5 = *(_DWORD *)a3;
  if ( v5 > 0x2F )
  {
    v6 = *(_DWORD **)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v6 + 2;
  }
  else
  {
    v6 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v5);
    *(_DWORD *)a3 = v5 + 8;
  }
  switch ( (unsigned __int64)a2 )
  {
    case 0uLL:
      if ( !*v6 )
        sub_418750(a1);
      goto LABEL_10;
    case 1uLL:
    case 0xAuLL:
      a2 = (_BYTE *)(&dword_0 + 1);
      sub_417150((__int64)a1, (_BYTE *)&dword_0 + 1);
      goto LABEL_5;
    case 2uLL:
    case 0xBuLL:
      sub_417150((__int64)a1, (_BYTE *)&dword_0 + 1);
      return 0;
    case 3uLL:
    case 4uLL:
    case 5uLL:
    case 6uLL:
    case 7uLL:
    case 8uLL:
    case 9uLL:
LABEL_5:
      v7 = a1[4];
      sub_414580(*(void **)(v7 + 240), a2);
      *(_QWORD *)(v7 + 240) = 0;
      *(_QWORD *)(v7 + 248) = v7 + 232;
      *(_QWORD *)(v7 + 256) = v7 + 232;
      *(_QWORD *)(v7 + 264) = 0;
      *(_BYTE *)(a1[4] + 272LL) = 1;
      return 0;
    case 0xCuLL:
      v10 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v11 = *(const char ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v11 + 1;
      }
      else
      {
        v11 = (const char **)(*(_QWORD *)(a3 + 16) + v10);
        *(_DWORD *)a3 = v10 + 8;
      }
      v12 = *v11;
      if ( *v11 && (v13 = strlen(*v11), (v14 = v13) != 0) )
      {
        v15 = (void *)a1[5];
        v16 = v13 + 1;
        if ( a1[7] < v13 + 1 )
        {
          v17 = qvector_reserve(a1 + 5, a1[5], v16, 1);
          a1[5] = v17;
          v15 = (void *)v17;
        }
        a1[6] = v16;
        memmove(v15, v12, v14);
        *(_BYTE *)(a1[5] + v14) = 0;
      }
      else
      {
        a1[6] = 0;
      }
      sub_417150((__int64)a1, nullptr);
      return 0;
    case 0xDuLL:
LABEL_10:
      sub_417150((__int64)a1, nullptr);
      v9 = a1[4];
      sub_414580(*(void **)(v9 + 240), nullptr);
      *(_QWORD *)(v9 + 240) = 0;
      *(_QWORD *)(v9 + 248) = v9 + 232;
      *(_QWORD *)(v9 + 256) = v9 + 232;
      *(_QWORD *)(v9 + 264) = 0;
      *(_BYTE *)(a1[4] + 272LL) = 1;
      sub_4172C0((__int64)a1, nullptr);
      return 0;
    default:
      return 0;
  }
}
