__int64 __fastcall sub_87DE0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebx
  _DWORD *v10; // rbp
  void (__fastcall *v11)(_QWORD *); // rdx
  void (__fastcall *v12)(_QWORD *); // rax
  _QWORD *v13; // r15
  __int64 v14; // r14
  void *v15; // rdi
  __int64 v16; // r15
  _QWORD *v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int16 v29; // [rsp+Eh] [rbp-6Ah]
  unsigned __int16 v30; // [rsp+1Ch] [rbp-5Ch] BYREF
  _BYTE v31[2]; // [rsp+1Eh] [rbp-5Ah] BYREF
  __int64 v32; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v33[8]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v34[9]; // [rsp+30h] [rbp-48h] BYREF

  v34[1] = __readfsqword(0x28u);
  if ( !a2 )
    return 1;
  v32 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *, __int64 *))(a1 + 216))(a5, &v30, &v32);
  if ( v8 )
    return v8;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, _QWORD *, _BYTE *, __int64 *))(a1 + 664))(
         a4,
         v30,
         v31,
         v34,
         v33,
         &v32);
  if ( v8 )
    return v8;
  v10 = *(_DWORD **)(sub_87C20(a3, a4) + 216);
  if ( v10 )
  {
    v29 = *((_WORD *)v10 + 21);
    if ( !v10[2] )
    {
      v11 = **(void (__fastcall ***)(_QWORD *))v10;
      if ( v11 == sub_15E30 )
      {
        v12 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v10 + 16LL);
        if ( v12 == sub_15D70 )
        {
          v13 = *((_QWORD **)v10 + 16);
          *(_QWORD *)v10 = &off_C71D8;
          if ( v13 )
          {
            v14 = v13[2];
            while ( v14 )
            {
              sub_80300(*(_QWORD **)(v14 + 24));
              v15 = (void *)v14;
              v14 = *(_QWORD *)(v14 + 16);
              operator delete(v15, 0x30u);
            }
            operator delete(v13, 0x30u);
          }
          v16 = *((_QWORD *)v10 + 19);
          while ( v16 )
          {
            v17 = (_QWORD *)v16;
            sub_80A30(*(_QWORD **)(v16 + 24));
            v18 = *(_QWORD *)(v16 + 32);
            v16 = *(_QWORD *)(v16 + 16);
            if ( v18 )
            {
              v17[5] = 0;
              qfree(v18);
            }
            operator delete(v17, 0x48u);
          }
          v19 = *((_QWORD *)v10 + 12);
          if ( v19 )
          {
            *((_QWORD *)v10 + 13) = 0;
            qfree(v19);
          }
          operator delete(v10, 0xC0u);
        }
        else
        {
          v12(v10);
        }
      }
      else
      {
        v11(v10);
      }
    }
  }
  else
  {
    v29 = 12;
  }
  v20 = a3[17];
  v21 = *(_QWORD *)(v20 + 312);
  if ( !v21 )
    return 1;
  v22 = *(_QWORD *)(v20 + 304);
  v23 = 0;
  while ( 1 )
  {
    v24 = v22 + 72 * v23;
    if ( *(_QWORD *)(v24 + 32) )
    {
      if ( !strcmp(*(const char **)(v24 + 24), ".debug_info") )
        break;
    }
    v23 = (int)++v8;
    if ( (int)v8 >= v21 )
      return 1;
  }
  if ( ((v29 - 4) & 0xFFFB) != 0 )
    return 1;
  if ( !v24 )
    return 1;
  v25 = *(_QWORD *)(v24 + 56);
  if ( v34[0] < v25 )
    return 1;
  v26 = v25 + *(unsigned int *)(v24 + 48);
  if ( v34[0] >= v26 )
    return 1;
  v27 = v34[0] + v29;
  if ( v27 < v25 || v27 >= v26 )
    return 1;
  if ( v29 == 4 )
    v28 = *(unsigned int *)v34[0];
  else
    v28 = *(_QWORD *)v34[0];
  *a2 = v28;
  return 0;
}
