__int64 __fastcall sub_4647C0(
        __int64 a1,
        unsigned __int64 *a2,
        signed int a3,
        signed int a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // r13d
  char *v11; // rax
  void *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // r14d
  char v18; // dl
  __int64 v19; // rax
  _DWORD *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r15
  unsigned int v25; // [rsp+8h] [rbp-150h]
  unsigned int v27; // [rsp+Ch] [rbp-14Ch]
  void *ptr; // [rsp+20h] [rbp-138h] BYREF
  __int128 v29; // [rsp+28h] [rbp-130h]
  int v30[2]; // [rsp+40h] [rbp-118h] BYREF
  int v31[2]; // [rsp+48h] [rbp-110h]
  int v32[2]; // [rsp+50h] [rbp-108h]
  char v33; // [rsp+58h] [rbp-100h] BYREF
  _QWORD v34[8]; // [rsp+118h] [rbp-40h] BYREF

  v6 = 0;
  v34[0] = __readfsqword(0x28u);
  if ( *(unsigned __int16 *)(a5 + 14) < a6 )
  {
    v25 = *(_DWORD *)(a5 + 8);
    switch_dbctx(*(int *)(a1 + 4LL * a4 + 16));
    *(_QWORD *)v30 = -1;
    *(_QWORD *)v31 = 0xFFFFFFFFLL;
    v11 = &v33;
    *(_QWORD *)v32 = 0;
    do
    {
      *(_WORD *)v11 = 0;
      v11 += 24;
      *((_WORD *)v11 - 11) = 0;
      *((_WORD *)v11 - 10) = 0;
      *((_DWORD *)v11 - 1) = 0;
      *((_WORD *)v11 - 9) = 0;
      *((_QWORD *)v11 - 2) = 0;
      *((_DWORD *)v11 - 2) = 0;
    }
    while ( v34 != (_QWORD *)v11 );
    v6 = 0;
    if ( (unsigned int)decode_insn(v30, v25, v34, 0, 0, a6) )
    {
      if ( HIWORD(v31[1]) == *(_WORD *)(a5 + 14) )
      {
        v6 = sub_458110(a1, a4, (__int64)v30);
        if ( !(_BYTE)v6 )
        {
          if ( !under_debugger )
            interr(2490);
          goto LABEL_26;
        }
        sub_456260(*(_DWORD *)(a1 + 4LL * a3 + 16), (__int64)v30);
        ptr = nullptr;
        v27 = v25 + a6;
        v29 = 0;
        v12 = (void *)qvector_reserve(&ptr, 0, 1, 4);
        v14 = v29;
        v15 = a3;
        ptr = v12;
        v16 = v25;
        *((_DWORD *)v12 + v29) = v25;
        *(_QWORD *)&v29 = v29 + 1;
        v17 = v25 + HIWORD(v31[1]);
        while ( v17 < v27 )
        {
          if ( !(unsigned int)decode_insn(v30, v17, v14, v16, v15, v13) || (v18 = sub_3D0F10(v30), v19 = v29, !v18) )
          {
            if ( (_QWORD)v29 )
            {
              sub_462A00(a1, a3, a4, v17, 1);
              v21 = v29;
              goto LABEL_17;
            }
LABEL_22:
            if ( !under_debugger )
              interr(2493);
LABEL_26:
            BUG();
          }
          v20 = ptr;
          if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v29 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v29 + 1, 4);
            v20 = ptr;
            v19 = v29;
          }
          v20[v19] = v17;
          *(_QWORD *)&v29 = v29 + 1;
          v17 += HIWORD(v31[1]);
          sub_456260(*(_DWORD *)(a1 + 4 * (a3 + 4LL)), (__int64)v30);
        }
        v21 = v29;
        if ( !(_QWORD)v29 )
          goto LABEL_22;
LABEL_17:
        *a2 = sub_462A00(a1, a3, a4, *((unsigned int *)ptr + v21 - 1), 1);
        v22 = (unsigned int)(v29 - 2);
        v23 = 4 * v22;
        if ( (int)v22 >= 0 )
        {
          do
          {
            sub_462A00(a1, a3, a4, *(unsigned int *)((char *)ptr + v23), 1);
            LODWORD(v22) = v22 - 1;
            v23 -= 4;
          }
          while ( (_DWORD)v22 != -1 );
        }
        sub_462A00(a1, a3, a4, v25, 1);
        if ( ptr )
        {
          *(_QWORD *)&v29 = 0;
          qfree(ptr);
        }
      }
    }
  }
  return v6;
}

