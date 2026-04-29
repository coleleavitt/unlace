__int64 __fastcall sub_3DC7C0(__int64 a1, __int64 a2, __int64 a3, char a4, double a5, double a6, double a7, __m128 a8)
{
  _DWORD *v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r13
  int v20; // r12d
  __int64 v21; // rdi
  unsigned int v22; // ebx
  __int64 v24; // rbp
  __int64 v25; // rdi
  int v26; // ebp
  char v27; // al
  __int64 v28; // rbp
  __int64 v29; // rdi
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  __int64 v32; // rbp
  _UNKNOWN **v33; // [rsp+0h] [rbp-88h] BYREF
  __int64 v34; // [rsp+8h] [rbp-80h]
  __int64 v35; // [rsp+10h] [rbp-78h]
  __int128 v36; // [rsp+18h] [rbp-70h]
  __int128 v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  __int64 v39; // [rsp+40h] [rbp-48h]
  unsigned __int64 v40; // [rsp+48h] [rbp-40h]

  v10 = *(_DWORD **)(a2 + 40);
  v40 = __readfsqword(0x28u);
  v12 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 128LL))(v10);
  if ( v12 == -1 )
    return 0;
  v13 = v12;
  if ( dword_4C0948 != (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 112LL))(v10) )
  {
    v18 = callui(123, a3, &callui, v15, v16, v17, v33, v34, v35, v36);
    v19 = v18;
    if ( v18 && a3 == *(_QWORD *)v18 )
    {
      v20 = a4 & 1;
      v33 = nullptr;
      v34 = -1;
      v35 = 0;
      v38 = 0;
      v39 = 3;
      v36 = 0;
      v37 = 0;
      v21 = *(_QWORD *)(v18 + 64);
      if ( v21 && (unsigned int)(*(_DWORD *)(v21 + 60) - 1) <= 1 )
      {
        if ( v20 )
        {
          if ( !*(_QWORD *)(v21 + 24) )
          {
LABEL_9:
            v22 = 0;
LABEL_10:
            if ( v35 )
            {
              *(_QWORD *)&v36 = 0;
              qfree(v35);
            }
            return v22;
          }
          if ( !rangeset_t_find_range(v21 + 16, v13) )
          {
            v28 = v38;
            v22 = 0;
            goto LABEL_26;
          }
          v31 = *((volatile signed __int32 **)&v37 + 1);
          *(_QWORD *)&v37 = *(_QWORD *)(v19 + 64);
          v32 = *(_QWORD *)(v19 + 72);
          if ( v32 != *((_QWORD *)&v37 + 1) )
          {
            if ( v32 )
            {
              if ( &_pthread_key_create )
                _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
              else
                ++*(_DWORD *)(v32 + 8);
              v31 = *((volatile signed __int32 **)&v37 + 1);
            }
            if ( v31 )
              sub_3D0460(v31);
            *((_QWORD *)&v37 + 1) = v32;
          }
          LODWORD(v39) = *(_DWORD *)(v19 + 56);
          v27 = sub_3D3A00(v19, (__int64)&v33, (__int64)v10);
LABEL_22:
          v28 = v38;
          if ( v27 )
          {
            if ( !v38 )
            {
              v30 = *((volatile signed __int32 **)&v37 + 1);
              v22 = 0;
LABEL_29:
              if ( v30 )
                sub_3D0460(v30);
              goto LABEL_10;
            }
            v38 = 0;
            v29 = *(_QWORD *)(a1 + 40);
            if ( !v29 )
            {
              *(_QWORD *)(a1 + 40) = v28;
              v22 = 1;
LABEL_28:
              v30 = *((volatile signed __int32 **)&v37 + 1);
              goto LABEL_29;
            }
            qfree(v29);
            *(_QWORD *)(a1 + 40) = v28;
            v28 = v38;
            v22 = 1;
          }
          else
          {
            v22 = 0;
          }
LABEL_26:
          if ( v28 )
            qfree(v28);
          goto LABEL_28;
        }
      }
      else if ( v20 )
      {
        goto LABEL_9;
      }
      v26 = *(_DWORD *)(v18 + 56);
      if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 112LL))(v10) == dword_4C0948 )
        v26 = v10[3];
      v27 = sub_3DA460(v19, (__int64)&v33, v10, v26, 0.0, a6, a7, a8);
      goto LABEL_22;
    }
    return 0;
  }
  v35 = v13;
  v22 = 0;
  LODWORD(v34) = -1;
  v33 = &off_4B8E98;
  v24 = ((__int64 (__fastcall *)(_UNKNOWN ***, __int64, __int64, __int64, __int64, __int64))idaplace_t__clone)(
          &v33,
          a2,
          v14,
          v15,
          v16,
          v17);
  if ( v24 )
  {
    v25 = *(_QWORD *)(a1 + 40);
    if ( v25 )
      qfree(v25);
    *(_QWORD *)(a1 + 40) = v24;
    return 1;
  }
  return v22;
}
