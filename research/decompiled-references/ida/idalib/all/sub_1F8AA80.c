void __fastcall sub_1F8AA80(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned __int64 v4; // rcx
  int v5; // ecx
  char v6; // cl
  __int64 v8; // rdx
  __int64 v10; // r13
  unsigned int v11; // ebx
  int v12; // r14d
  int *v13; // rax
  int v14; // eax
  bool v15; // zf
  __int64 v16; // r9
  __int64 v17; // rax
  void **v18; // rbx
  void ***v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  _QWORD *v24; // rax
  int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // esi
  __int64 v29; // r8
  int v30; // edx
  void **v31; // rdi
  unsigned __int64 v32; // r15
  __int64 v33; // rax
  _QWORD *v34; // rcx
  char v35; // dl
  _DWORD *v36; // rax
  _DWORD *v37; // rdx
  _QWORD *v38; // [rsp+8h] [rbp-60h]
  __int64 v39; // [rsp+18h] [rbp-50h] BYREF
  __int64 v40; // [rsp+20h] [rbp-48h] BYREF
  int v41; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v42; // [rsp+2Ch] [rbp-3Ch]

  v3 = *(_DWORD *)(a2 + 24);
  if ( !v3 )
    return;
  v4 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
  {
    v5 = *(_BYTE *)(*(_QWORD *)(v4 + 8) + 8LL) & 0x7F;
    if ( v5 == 24 )
      goto LABEL_5;
  }
  else
  {
    v5 = *(_BYTE *)(v4 + 8) & 0x7F;
    if ( v5 == 24 )
      goto LABEL_5;
  }
  if ( v5 )
    return;
LABEL_5:
  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v6 != 43 && v6 != 68 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    v10 = *(_QWORD *)(v8 + 88);
    if ( v3 < 0 )
      v3 = sub_1021D50(*(_QWORD *)(v8 + 88), v3);
    v11 = v3 & 0x7FFFFFFF;
    if ( v11 < *(_DWORD *)(v10 + 476) || v11 >= *(_DWORD *)(v10 + 480) )
      v12 = sub_101D590(v10, v11);
    else
      v12 = *(_DWORD *)(v10 + 472);
    LOBYTE(v41) = 0;
    if ( (unsigned int)(v12 + 1) > 1 )
    {
      if ( v12 >= 0 )
      {
        v13 = (int *)(*(_QWORD *)(v10 + 184) + 24LL * (unsigned int)v12);
        goto LABEL_15;
      }
      v32 = (unsigned int)(-2 - v12);
      v33 = *(_QWORD *)(*(_QWORD *)(v10 + 320) + 8LL * ((unsigned int)(-2 - v12) >> 6));
      if ( _bittest64(&v33, v32) )
      {
        v34 = (_QWORD *)(*(_QWORD *)(v10 + 272) + 8 * ((unsigned __int64)(int)v32 >> 5));
        if ( *v34 )
        {
          v13 = (int *)(*v34 + 24LL * ((-2 - (_BYTE)v12) & 0x1F));
          goto LABEL_15;
        }
        v38 = (_QWORD *)(*(_QWORD *)(v10 + 272) + 8 * ((unsigned __int64)(int)v32 >> 5));
        v36 = (_DWORD *)sub_1F74DE0((__int64 *)(*(_QWORD *)(v10 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
        v37 = v36 + 192;
        *v38 = v36;
        do
        {
          *v36 = 0;
          v36 += 6;
          *((_OWORD *)v36 - 1) = 0;
          *((_QWORD *)v36 - 1) = 0;
        }
        while ( v36 != v37 );
        v35 = v41;
        v13 = (int *)(*v38 + 24LL * ((-2 - (_BYTE)v12) & 0x1F));
      }
      else
      {
        v13 = (int *)sub_101F930(v10, v32, &v41);
        v35 = v41;
      }
      if ( v35 )
        return;
LABEL_15:
      if ( !v13 )
        return;
      v14 = *v13;
      v41 = v12;
      v42 = v11 - (v14 & 0x7FFFFFFF);
      v15 = (unsigned __int8)sub_1F74C80((__int64 *)(a1 + 784), &v41, &v39) == 0;
      v17 = v39;
      if ( !v15 )
      {
        v18 = *(void ***)(v39 + 8);
        v19 = (void ***)(v39 + 8);
        if ( v18 )
          goto LABEL_18;
        goto LABEL_31;
      }
      v25 = *(_DWORD *)(a1 + 792);
      v26 = *(unsigned int *)(a1 + 800);
      v40 = v39;
      v27 = (unsigned int)(v25 + 1);
      v28 = 2 * v26;
      v29 = (unsigned int)(4 * v27);
      if ( (unsigned int)v29 < 3 * (int)v26 )
      {
        if ( (int)v26 - *(_DWORD *)(a1 + 796) - (int)v27 > (unsigned int)v26 >> 3 )
        {
LABEL_28:
          *(_DWORD *)(a1 + 792) = v27;
          if ( *(_DWORD *)v17 )
            --*(_DWORD *)(a1 + 796);
          v30 = v41;
          *(_QWORD *)(v17 + 8) = 0;
          v19 = (void ***)(v17 + 8);
          *(_DWORD *)v17 = v30;
LABEL_31:
          v18 = (void **)operator new(0x418u);
          memset(v18, 0, 0x418u);
          *v18 = v18 + 2;
          v31 = *v19;
          v18[1] = (void *)0x4000000000LL;
          *v19 = v18;
          if ( !v31 )
          {
            v21 = 64;
            v22 = 1;
            v20 = 0;
            goto LABEL_19;
          }
          sub_1F6AA30(v31);
          v18 = *v19;
LABEL_18:
          v20 = *((unsigned int *)v18 + 2);
          v21 = *((unsigned int *)v18 + 3);
          v22 = v20 + 1;
LABEL_19:
          v23 = v42;
          if ( v22 > v21 )
          {
            sub_2237220(v18, v18 + 2, v22, 16);
            v20 = *((unsigned int *)v18 + 2);
          }
          v24 = (char *)*v18 + 16 * v20;
          *v24 = v23;
          v24[1] = a3;
          ++*((_DWORD *)v18 + 2);
          return;
        }
        v28 = v26;
      }
      sub_1F8A860((__int64 *)(a1 + 784), v28, v27, v26, v29, v16);
      sub_1F74C80((__int64 *)(a1 + 784), &v41, &v40);
      LODWORD(v27) = *(_DWORD *)(a1 + 792) + 1;
      v17 = v40;
      goto LABEL_28;
    }
  }
}
