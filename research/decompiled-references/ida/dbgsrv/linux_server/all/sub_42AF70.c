/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42AF70
// Address: 0x000000000042AF70

//----- (000000000042AF70) ----------------------------------------------------
__int64 __fastcall sub_42AF70(__int64 a1, __int64 a2, int a3, __int64 (***a4)())
{
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rtt
  int v12; // r13d
  unsigned __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r15
  __int64 *v16; // rdx
  __int64 (*v17)(); // rax
  unsigned int v18; // r15d
  char *v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbp
  char *v22; // rbx
  void *v23; // rdi
  void *v24; // rdi
  unsigned __int64 v28; // [rsp+18h] [rbp-C0h] BYREF
  void *ptr; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v30; // [rsp+28h] [rbp-B0h]
  _QWORD v31[3]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-80h]
  __int64 v33; // [rsp+60h] [rbp-78h]
  void *v34; // [rsp+68h] [rbp-70h]
  __int128 v35; // [rsp+70h] [rbp-68h]
  __int64 v36; // [rsp+80h] [rbp-58h]
  __int64 v37; // [rsp+88h] [rbp-50h]
  unsigned __int64 v38; // [rsp+98h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 56);
  v5 = *(_QWORD *)(a2 + 24);
  v38 = __readfsqword(0x28u);
  v31[1] = a1;
  v31[2] = v5;
  v32 = 0;
  v33 = v4;
  v34 = nullptr;
  v36 = 0;
  v31[0] = &off_4C2328;
  v37 = 0;
  v35 = 0;
  v6 = sub_426A90((_QWORD *)(a1 + 80), a2);
  if ( v10 )
  {
    v11 = v6;
    v6 /= v10;
    v7 = v11 % v10;
  }
  v32 = v6;
  v12 = 0;
  while ( (unsigned __int8)sub_42AB70((__int64)v31, &v28, v7, v8, v9, v10) )
  {
    if ( !v12 )
    {
      if ( !(unsigned __int8)sub_42AB70((__int64)v31, &v28, v13, v8, v9, v10) )
        break;
      v12 = 1;
    }
    v7 = v28;
    v14 = *(unsigned __int16 *)(v28 + 54);
    if ( !*(_WORD *)(v28 + 54)
      || v14 == 65280
      || v14 == 65311
      || v14 == 65521
      || (v8 = *(unsigned int *)(v28 + 48), (*(_BYTE *)(v28 + 52) & 0xFu) - 1 > 1)
      || !(_DWORD)v8 )
    {
LABEL_26:
      ++v12;
    }
    else
    {
      v15 = *(_QWORD *)(v28 + 56);
      v30 = 0;
      ptr = nullptr;
      if ( qword_4C8078 != -1 )
        v15 -= qword_4C8078;
      v16 = (__int64 *)(a1 + 352);
      if ( a3 != 2 )
        v16 = (__int64 *)(a1 + 320);
      sub_428E80(a1, (__int64)&ptr, v16, v8);
      v8 = (__int64)s1;
      v17 = **a4;
      if ( (_QWORD)v30 )
        v8 = (__int64)ptr;
      v7 = (unsigned __int64)sub_40D290;
      if ( v17 != sub_40D290 )
      {
        v18 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, __int64))v17)(a4, v15, v8);
        if ( ptr )
        {
          *(_QWORD *)&v30 = 0;
          j__free(ptr);
        }
        if ( v18 )
          goto LABEL_28;
        goto LABEL_26;
      }
      if ( !ptr )
        goto LABEL_26;
      *(_QWORD *)&v30 = 0;
      ++v12;
      j__free(ptr);
    }
  }
  v18 = 0;
LABEL_28:
  v19 = (char *)v34;
  v31[0] = &off_4C2328;
  if ( v34 )
  {
    v20 = v35;
    if ( (_QWORD)v35 )
    {
      v21 = 0;
      do
      {
        v22 = &v19[96 * v21];
        v23 = *((void **)v22 + 3);
        if ( v23 )
        {
          *((_QWORD *)v22 + 4) = 0;
          j__free(v23);
        }
        v24 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          j__free(v24);
        }
        ++v21;
        v19 = (char *)v34;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v35 = 0;
    j__free(v19);
  }
  return v18;
}
// 42AFFF: variable 'v10' is possibly undefined
// 42B01E: variable 'v7' is possibly undefined
// 42B01E: variable 'v8' is possibly undefined
// 42B01E: variable 'v9' is possibly undefined
// 42B036: variable 'v13' is possibly undefined
// 40D290: using guessed type __int64 sub_40D290();
// 4C2328: using guessed type __int64 (__fastcall *off_4C2328)();
// 4C8078: using guessed type __int64 qword_4C8078;
