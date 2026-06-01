/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A1E60
// Address: 0x00000000000A1E60

//----- (00000000000A1E60) ----------------------------------------------------
bool __fastcall sub_A1E60(__int64 a1, void **a2, __int64 a3, char a4, double a5)
{
  char *v9; // rsi
  __int64 v10; // rdx
  char *v11; // rax
  __int64 v12; // rcx
  char *v13; // rdi
  void *v14; // rbp
  unsigned __int64 v15; // r15
  __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rsi
  unsigned __int64 v21; // rsi
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rsi
  unsigned __int64 v25; // rdx
  char *v26; // rax
  unsigned int *v27; // r15
  int v28; // eax
  __int64 v29; // rsi
  void *v30; // r13
  int v31; // ebp
  __int64 v32; // rcx
  __int64 v33; // rdx
  void **v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  void **v38; // rdi
  __int64 v39; // rdx
  bool result; // al
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  int v43; // esi
  char v44; // [rsp+Ch] [rbp-5Ch]
  int v45; // [rsp+10h] [rbp-58h] BYREF
  void *ptr; // [rsp+18h] [rbp-50h]
  __int128 v47; // [rsp+20h] [rbp-48h]
  unsigned __int64 v48; // [rsp+30h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 672) & 0x10) == 0 )
  {
LABEL_2:
    v9 = *(char **)(a1 + 352);
    v10 = *(_QWORD *)(a1 + 360);
    v11 = &v9[8 * v10];
    v12 = 8 * v10;
    v13 = v9;
    if ( 8 * v10 )
    {
      v14 = *a2;
      v13 = *(char **)(a1 + 352);
      while ( v14 != *(void **)v13 )
      {
        v13 += 8;
        v12 -= 8;
        if ( !v12 )
          goto LABEL_19;
      }
    }
    if ( v13 != v11 )
    {
      if ( !(_BYTE)under_debugger )
        interr(616);
      BUG();
    }
    v14 = *a2;
LABEL_19:
    v25 = v10 + 1;
    if ( *(_QWORD *)(a1 + 368) < v25 )
    {
      v26 = (char *)qvector_reserve(a1 + 352, v9, v25, 8u);
      *(_QWORD *)(a1 + 352) = v26;
      v12 = *(_QWORD *)(a1 + 360);
      v11 = &v26[8 * v12];
    }
    *(_QWORD *)v11 = v14;
    ++*(_QWORD *)(a1 + 360);
    if ( (a4 & 1) == 0 )
    {
      v45 = -2;
      a5 = 0.0;
      v47 = 0;
      ptr = *a2;
      if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, int *, _QWORD))(*(_QWORD *)a1 + 232LL))(
             a1,
             *(unsigned int *)(a3 + 4),
             *(unsigned int *)(a1 + 656),
             &v45,
             0) <= 0 )
      {
        v36 = *(_QWORD *)(a1 + 360);
        v37 = 8 * v36;
        v38 = *(void ***)(a1 + 352);
        if ( 8 * v36 )
        {
          v38 = *(void ***)(a1 + 352);
          while ( *a2 != *v38 )
          {
            ++v38;
            v37 -= 8;
            if ( !v37 )
              goto LABEL_56;
          }
        }
        v39 = *(_QWORD *)(a1 + 352) + 8 * v36;
        if ( v38 != (void **)v39 )
        {
          memmove(v38, v38 + 1, (v39 - 8 - (_QWORD)v38) & 0xFFFFFFFFFFFFFFF8LL);
          --*(_QWORD *)(a1 + 360);
        }
LABEL_56:
        if ( v45 >= -1 )
        {
          if ( ptr )
          {
            *(_QWORD *)&v47 = 0;
            qfree(ptr);
            ptr = nullptr;
            *((_QWORD *)&v47 + 1) = 0;
          }
          v45 = -2;
        }
        return 0;
      }
      if ( v45 >= -1 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v47 = 0;
          qfree(ptr);
          ptr = nullptr;
          *((_QWORD *)&v47 + 1) = 0;
        }
        v45 = -2;
      }
    }
    v27 = (unsigned int *)(a3 + 4);
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
            a1,
            *(unsigned int *)(a3 + 4),
            v25,
            v12);
    if ( v28 <= 0 )
    {
      v31 = v28;
    }
    else
    {
      v44 = a4;
      v29 = *((unsigned int *)a2 + 8);
      if ( (_DWORD)v29 == 4 )
        v30 = a2[6];
      else
        LODWORD(v30) = *((_DWORD *)a2 + 107);
      v31 = (*(__int64 (__fastcall **)(__int64, __int64, void *, void *, _QWORD))(*(_QWORD *)a1 + 320LL))(
              a1,
              v29,
              *a2,
              a2[5],
              (unsigned int)v30);
      if ( v31 > 0 )
      {
        if ( (**(int (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a3, (__int64)(a2 + 8)) <= 0 )
        {
          v31 = 0;
          sub_391F0(a1, "%a: failed to single step\n", a5);
        }
        if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, void *, _QWORD))(*(_QWORD *)a1 + 312LL))(
               a1,
               0,
               *((unsigned int *)a2 + 8),
               *a2,
               (unsigned int)v30) <= 0 )
        {
          sub_40970(a1, "%a: could not restore deleted bpt\n", a5);
          v31 = 0;
        }
      }
      a4 = v44;
      if ( (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, *v27) <= 0 )
      {
        v31 = 0;
        sub_40970(a1, "%d: could not resume suspended threads\n", *v27);
      }
    }
    v32 = *(_QWORD *)(a1 + 360);
    v33 = 8 * v32;
    v34 = *(void ***)(a1 + 352);
    if ( 8 * v32 )
    {
      v34 = *(void ***)(a1 + 352);
      while ( *a2 != *v34 )
      {
        ++v34;
        v33 -= 8;
        if ( !v33 )
          goto LABEL_46;
      }
    }
    v35 = *(_QWORD *)(a1 + 352) + 8 * v32;
    if ( v34 != (void **)v35 )
    {
      memmove(v34, v34 + 1, (v35 - 8 - (_QWORD)v34) & 0xFFFFFFFFFFFFFFF8LL);
      --*(_QWORD *)(a1 + 360);
    }
LABEL_46:
    if ( v31 > 0 && (*(_DWORD *)(a3 + 20) & 0xFFFFFFF) == 6 )
      goto LABEL_71;
    return 0;
  }
  if ( *((_DWORD *)a2 + 8) != 4 )
  {
    v15 = (unsigned __int64)*a2;
    v16 = *((int *)a2 + 107);
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 496LL))(a1);
    v18 = a1 + 512;
    v19 = *(_QWORD **)(a1 + 512);
    v20 = (_QWORD *)(a1 + 512);
    if ( v19 )
    {
      v21 = v15 & -v17;
      v22 = (_QWORD *)(a1 + 512);
      do
      {
        if ( v19[4] >= v21 )
          v22 = v19;
        v19 = (_QWORD *)v19[v19[4] < v21];
      }
      while ( v19 );
      v20 = (_QWORD *)(a1 + 512);
      if ( v22 != (_QWORD *)v18 )
      {
        v23 = v22[4];
        if ( v23 < v15 + v16 )
        {
          v24 = v22 + 4;
          if ( !(_DWORD)v16 )
            goto LABEL_71;
          goto LABEL_69;
        }
        v20 = v22;
      }
    }
    if ( v20 == *(_QWORD **)(a1 + 504) )
      goto LABEL_71;
    v41 = (_QWORD *)*v20;
    if ( *v20 )
    {
      do
      {
        v22 = v41;
        v41 = (_QWORD *)v41[1];
      }
      while ( v41 );
    }
    else
    {
      do
      {
        v42 = v20;
        v20 = (_QWORD *)v20[2];
      }
      while ( (_QWORD *)*v20 == v42 );
      v22 = v20;
    }
    v23 = v22[4];
    v24 = v22 + 4;
    if ( !(_DWORD)v16 )
      goto LABEL_71;
LABEL_69:
    v43 = *((_DWORD *)v24 + 7);
    if ( v43 && v15 + v16 - 1 >= v23 && v22 != (_QWORD *)v18 && v23 + v43 - 1 >= v15 )
      goto LABEL_2;
  }
LABEL_71:
  result = 1;
  if ( (a4 & 2) == 0 )
    return (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a3) > 0;
  return result;
}
// A2048: variable 'v25' is possibly undefined
// A2048: variable 'v12' is possibly undefined
// 158B40: using guessed type __int64 under_debugger;
