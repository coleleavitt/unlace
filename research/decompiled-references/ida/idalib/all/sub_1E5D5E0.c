void __fastcall sub_1E5D5E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // [rsp+0h] [rbp-1A0h]
  __int64 v23; // [rsp+8h] [rbp-198h]
  __int64 v24; // [rsp+10h] [rbp-190h]
  __int64 v25; // [rsp+20h] [rbp-180h] BYREF
  __int128 v26; // [rsp+28h] [rbp-178h] BYREF
  __int64 v27; // [rsp+38h] [rbp-168h] BYREF
  void *ptr[2]; // [rsp+48h] [rbp-158h] BYREF
  _QWORD v29[41]; // [rsp+58h] [rbp-148h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)a3 = *(_DWORD *)(v6 + 192);
  if ( ((*(_DWORD *)v6 >> 12) & 0x7F) == 0x33 )
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(v6 + 216);
  if ( (*(_BYTE *)(v6 + 3) & 2) != 0 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
    {
      v8 = *(unsigned int *)(v6 + 112);
      v9 = a3;
      if ( (_DWORD)v8 )
      {
        a3 = *(unsigned int *)(v6 + 116);
        if ( (_DWORD)a3 || *(_QWORD *)(v6 + 120) )
          goto LABEL_7;
      }
      else if ( *(_QWORD *)(v6 + 120) )
      {
LABEL_7:
        v22 = sub_15AB9E0(v6 + 112, *(_QWORD **)(a1 + 8), a3, v8, a5, a6);
        v23 = v11;
LABEL_8:
        v29[32] = *(_QWORD *)(v7 + 36);
        v12 = *(unsigned int *)(v7 + 44);
        ptr[0] = v29;
        ptr[1] = (void *)0x800000000LL;
        if ( (_DWORD)v12 )
        {
          v21 = *(_QWORD *)a1;
          *((_QWORD *)&v26 + 1) = v12;
          *(_QWORD *)&v26 = v7 + 56;
          sub_1CB4530(v21, &v26, (__int64 *)ptr);
        }
        v13 = *(_DWORD *)(v7 + 4);
        *(_QWORD *)&v26 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 40LL);
        DWORD2(v26) = v13;
        sub_B85890(&v27, v26);
        sub_F22A90(&v25, *(_QWORD *)(v7 + 24));
        v16 = sub_F22F90(&v25);
        if ( !v16 )
          v16 = sub_F22BD0(&v25, 0);
        v24 = v16;
        v18 = sub_F1ED40(*(_QWORD **)(a1 + 8), (__int64 *)ptr, v14, v15, v16, v17);
        v19 = sub_A55700(*(_QWORD **)(a1 + 8), v22, v23, *(_DWORD *)v7, v24, *(_QWORD *)(a2 + 32), v26, v27, v18);
        v20 = ptr[0];
        *(_QWORD *)(v9 + 8) = v19;
        if ( v20 != v29 )
          free(v20);
        return;
      }
      v22 = 0;
      v23 = 0;
      goto LABEL_8;
    }
  }
}
