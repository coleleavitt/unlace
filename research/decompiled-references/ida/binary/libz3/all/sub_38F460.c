__int64 __fastcall sub_38F460(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        void **a5,
        void **a6,
        _Unwind_Exception *a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  _QWORD *v11; // r14
  int v16; // ecx
  __int64 v17; // r8
  unsigned int v18; // edx
  unsigned int v19; // eax
  char v20; // r15
  _QWORD *v21; // rsi
  __int64 result; // rax
  __int64 v23; // rax
  void *v24; // rbx
  void (__fastcall ***v25)(void *); // r12
  bool v26; // zf
  _QWORD *v27; // rdx
  __int64 v28; // rdi
  void *v29; // rsi
  void *v30; // rdi
  void (__fastcall ***v31)(void *); // rbp
  _DWORD *v32; // rbx
  int v33; // eax
  int v34; // eax
  void (__fastcall ***v35)(_QWORD); // rbx
  __int64 v36; // rax
  _QWORD *v37; // rdi
  __int64 v38; // rax
  __int64 i; // rax
  int v41; // [rsp+8h] [rbp-60h]
  int v42; // [rsp+Ch] [rbp-5Ch]
  __int64 v43; // [rsp+10h] [rbp-58h]
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  v11 = a1 + 4;
  v16 = sub_655220(a1 + 4, a2);
  *(_DWORD *)(*a3 + 120LL) = (*(_DWORD *)(*a3 + 120LL) + 1) & 0x3FFFFFF | *(_DWORD *)(*a3 + 120LL) & 0xFC000000;
  v17 = *a3;
  ++*(_DWORD *)(v17 + 32);
  v18 = *(_DWORD *)(a4 + 8);
  v19 = *(_DWORD *)(a4 + 12);
  v20 = *(_BYTE *)(v17 + 123);
  if ( v18 >= v19 )
  {
    v43 = v17;
    v41 = 2 * v19;
    v42 = v16;
    v36 = sub_186B270(16LL * v19);
    v18 = *(_DWORD *)(a4 + 8);
    v37 = *(_QWORD **)a4;
    v16 = v42;
    v17 = v43;
    v21 = (_QWORD *)v36;
    if ( v18 )
    {
      if ( v18 - 1 <= 2 || (_QWORD *)v36 == v37 + 1 )
      {
        for ( i = 0; i != v18; ++i )
          v21[i] = v37[i];
      }
      else
      {
        v38 = 0;
        do
        {
          *(__m128i *)&v21[v38] = _mm_loadu_si128((const __m128i *)&v37[v38]);
          v38 += 2;
        }
        while ( 2LL * (v18 >> 1) != v38 );
        if ( (v18 & 1) != 0 )
          v21[v18 & 0xFFFFFFFE] = v37[v18 & 0xFFFFFFFE];
      }
    }
    if ( v37 != (_QWORD *)(a4 + 16) && v37 )
    {
      sub_186B220(v37);
      v18 = *(_DWORD *)(a4 + 8);
      v17 = v43;
      v16 = v42;
    }
    *(_QWORD *)a4 = v21;
    *(_DWORD *)(a4 + 12) = v41;
  }
  else
  {
    v21 = *(_QWORD **)a4;
  }
  result = v18;
  v21[v18] = v17;
  *(_DWORD *)(a4 + 8) = v18 + 1;
  if ( v16 != -1 )
  {
    if ( v16 == 1 )
    {
      result = sub_64C630(v11);
      if ( (_BYTE)result )
      {
        if ( (v20 & 8) != 0 )
        {
          sub_6544C0(ptr, v11);
          v23 = sub_132F960(*a1, ptr[0]);
          v24 = (void *)v23;
          if ( v23 )
            ++*(_DWORD *)(v23 + 8);
          v25 = (void (__fastcall ***)(void *))*a6;
          if ( *a6 )
          {
            v26 = (*((_DWORD *)v25 + 2))-- == 1;
            if ( v26 )
            {
              (**v25)(v25);
              sub_186B220(v25);
            }
          }
          v27 = ptr[0];
          v28 = *a3;
          *a6 = v24;
          result = sub_EDB570(v28, v27[(unsigned int)(*((_DWORD *)v27 + 6) - 1) + 4], v27, 0);
          v29 = ptr[0];
          if ( ptr[0] )
          {
            v30 = ptr[1];
            v26 = (*((_DWORD *)ptr[0] + 2))-- == 1;
            if ( v26 )
              return sub_15D7BC0(v30, v29);
          }
        }
        else
        {
          return sub_EDBA20(*a3, *(_QWORD *)(*a1 + 864LL), 0, a7, a8, a9, a10, a11);
        }
      }
    }
    return result;
  }
  result = sub_ED2DA0(*a3);
  if ( (v20 & 4) == 0 )
    return result;
  sub_654460(ptr, v11);
  result = sub_1336B20(ptr[0]);
  v31 = (void (__fastcall ***)(void *))*a5;
  v32 = (_DWORD *)result;
  if ( result )
  {
    v33 = *(_DWORD *)(result + 8);
    v32[2] = v33 + 2;
    if ( !v31 )
    {
      *a5 = v32;
      result = (unsigned int)(v33 + 1);
LABEL_21:
      v32[2] = result;
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(_DWORD *))v32)(v32);
        result = sub_186B220(v32);
      }
      goto LABEL_23;
    }
    v26 = (*((_DWORD *)v31 + 2))-- == 1;
    if ( !v26 )
    {
      v34 = v32[2];
      *a5 = v32;
      result = (unsigned int)(v34 - 1);
      goto LABEL_21;
    }
  }
  else if ( !v31 || (v26 = *((_DWORD *)v31 + 2) == 1, --*((_DWORD *)v31 + 2), !v26) )
  {
    *a5 = nullptr;
    goto LABEL_23;
  }
  (**v31)(v31);
  result = sub_186B220(v31);
  *a5 = v32;
  if ( v32 )
  {
    result = (unsigned int)(v32[2] - 1);
    goto LABEL_21;
  }
LABEL_23:
  v35 = (void (__fastcall ***)(_QWORD))ptr[0];
  if ( ptr[0] )
  {
    v26 = (*((_DWORD *)ptr[0] + 4))-- == 1;
    if ( v26 )
    {
      (**v35)(v35);
      return sub_186B220(v35);
    }
  }
  return result;
}

