void __fastcall sub_A66F90(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int v9; // eax
  bool v10; // zf
  unsigned int v11; // eax
  void *v12; // rbx
  void *v13; // rbx
  _DWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // [rsp+0h] [rbp-C8h]
  __int64 v34; // [rsp+0h] [rbp-C8h]
  __int64 v35; // [rsp+0h] [rbp-C8h]
  __int64 v36; // [rsp+8h] [rbp-C0h]
  __int64 v37; // [rsp+10h] [rbp-B8h]
  int v38; // [rsp+10h] [rbp-B8h]
  char v39; // [rsp+2Fh] [rbp-99h] BYREF
  _QWORD v40[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v41[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v43[2]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v44[11]; // [rsp+70h] [rbp-58h] BYREF

  v6 = a3;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( v7 )
  {
    a3 = *a2;
    if ( (unsigned int)a3 < *(_DWORD *)(v7 - 4) )
    {
      v8 = *(_QWORD *)(v7 + 8 * a3);
      if ( v8 )
      {
        v9 = sub_B39350(*(_QWORD *)(v7 + 8 * a3), *(unsigned int *)(a1 + 8));
        if ( v9 != -1 )
        {
          a3 = *(_QWORD *)(a1 + 32);
          if ( *(_QWORD *)(a3 + 8LL * v9) == v8 )
          {
            v24 = sub_B39350(v8, *(unsigned int *)(a1 + 8));
            sub_9F72C0(a1, v6, (__int64)&qword_1C7F260, v24);
            return;
          }
        }
      }
    }
  }
  v40[0] = 0;
  v10 = *((_WORD *)a2 + 2) == 0;
  v40[1] = 0;
  v41[0] = 1;
  v41[1] = 0;
  v42[0] = 0;
  v42[1] = 0;
  v43[0] = 1;
  v43[1] = 0;
  if ( !v10
    || (v14 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) == nullptr
    || *v14 != 5
    || v14[1] != 9
    || a2[6] != 2
    || (v37 = *((_QWORD *)a2 + 5), v36 = *((_QWORD *)a2 + 4), !(unsigned __int8)sub_1666AE0(a1 + 472, v36, v40, &v39))
    || *(_WORD *)(v36 + 4)
    || (a4 = v37, *(_WORD *)(v37 + 4)) )
  {
    v11 = sub_A66A90((__int64 *)a1, a2, a3, a4, a5, a6, v33);
    sub_9F72C0(a1, v6, (__int64)&qword_1C7F260, v11);
LABEL_8:
    v12 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v42);
    sub_182CBA0(v12, v43);
    v13 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v40);
    sub_182CBA0(v13, v41);
    return;
  }
  if ( !(unsigned __int8)sub_1666AE0(a1 + 472, v37, v42, v44) )
  {
    v44[0] = 0;
    v44[1] = 0;
    v44[2] = 1;
    v44[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v44, (int *)v40);
    v30 = (unsigned int)sub_A66A90((__int64 *)a1, (unsigned int *)v37, v25, v26, v27, v28, v33);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 464) + 36LL) )
    {
      v38 = v30;
      sub_A66A90((__int64 *)a1, (unsigned int *)v36, v29, v30, v31, v32, v35);
      sub_9A0C70(a1, a2);
      LODWORD(v30) = v38;
    }
    sub_9F7580(a1, v6, (__int64)v44, v30);
    sub_25A130((char *)v44);
    goto LABEL_8;
  }
  sub_27B340((__int64)v44, (__int64)v40, (int *)v42);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 464) + 36LL) )
  {
    sub_A66A90((__int64 *)a1, (unsigned int *)v36, v15, v16, v17, v18, v33);
    sub_A66A90((__int64 *)a1, (unsigned int *)v37, v19, v20, v21, v22, v34);
    sub_9A0C70(a1, a2);
  }
  v23 = sub_A66480(a1, a2, (__int64)v44);
  sub_9F7580(a1, v6, (__int64)&qword_1C7F280, v23);
  sub_25A130((char *)v44);
  sub_25A130((char *)v42);
  sub_25A130((char *)v40);
}

