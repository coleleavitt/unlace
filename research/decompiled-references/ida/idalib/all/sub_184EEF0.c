__int64 __fastcall sub_184EEF0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned __int8 v13; // al
  unsigned int v14; // ebx
  __int64 *v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rdx
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rax
  __int64 v37; // r9
  int v38; // ebp
  unsigned __int64 v39; // rdx
  __int64 v40; // [rsp+0h] [rbp-88h] BYREF
  __int64 v41; // [rsp+8h] [rbp-80h]
  void *v42; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v43; // [rsp+18h] [rbp-70h]
  char v44; // [rsp+1Ch] [rbp-6Ch]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v46; // [rsp+28h] [rbp-60h]
  _BYTE v47[88]; // [rsp+30h] [rbp-58h] BYREF

  v7 = (_QWORD *)a1[31];
  v40 = 0;
  v8 = sub_A725A0(v7, a2, &v40, a4, a5);
  v40 &= 0xFFFFFFFFFFFFFFF8LL;
  v9 = sub_A70F20(a1[31], v8, v40);
  v10 = sub_A72040(v7, v9);
  if ( v10 && (unsigned int)*(unsigned __int8 *)(v10 + 16) - 2 <= 1 )
  {
    v12 = *(_QWORD *)(v10 + 40);
    v13 = *(_BYTE *)(v10 + 19);
    if ( (v13 & 2) != 0 )
    {
      LODWORD(v46) = *(_DWORD *)(v12 + 8);
      if ( (unsigned int)v46 <= 0x40 )
      {
        ptr = *(void **)v12;
        return (unsigned int)((_DWORD)ptr + 1);
      }
      sub_2205510(&ptr);
      v19 = v46;
    }
    else
    {
      v19 = 8 * ((v13 >> 2) & 0x1F);
      LODWORD(v46) = v19;
      if ( v19 > 64 )
      {
        sub_2205470(&ptr, v12, 0);
        v19 = v46;
      }
      else
      {
        ptr = (void *)v12;
      }
    }
    if ( (unsigned int)v19 > 0x40 )
    {
      v14 = *(_DWORD *)ptr + 1;
      operator delete[](ptr);
      return v14;
    }
    return (unsigned int)((_DWORD)ptr + 1);
  }
  v15 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(unsigned __int8 *)(v16 + 16);
  if ( (unsigned int)(v17 - 57) <= 1 )
    return (unsigned int)(*(_DWORD *)(v16 + 20) + 1);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1 )
  {
    v16 = sub_F63050(v16, v9, v17, v11);
    if ( v16 )
      return (unsigned int)(*(_DWORD *)(v16 + 20) + 1);
    v16 = *v15;
    v17 = *(unsigned __int8 *)(*v15 + 16);
  }
  if ( (_BYTE)v17 == 14
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 14
    && sub_F63050(v16, v9, v17, v11) )
  {
    return 3;
  }
  v20 = sub_A63CE0(v7);
  v43 = sub_A97D20((__int64)v7, *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v43 > 0x40 )
    sub_2205470(&v42, 0, 0);
  else
    v42 = nullptr;
  v44 = 1;
  v21 = sub_184B570(a1, a3, v9, (__int64)&v42);
  if ( v21 )
  {
    if ( v21 == 2
      || (v26 = sub_F63270(*v15, a3, v22, v23, v24, v25), (v27 = (__int64)v26) == 0)
      || *((_BYTE *)v26 + 73) >> 5 == 2
      || (unsigned __int8)sub_1E63CF0(a1, a3, v9, 1, 3968) )
    {
      v30 = v43;
      v14 = 0;
    }
    else
    {
      ptr = v47;
      v46 = 0x400000000LL;
      v41 = sub_184E8C0(a1, a3, v27, (__int64)&ptr, v28, v29);
      if ( (v41 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_54;
      v36 = sub_B7E900(v41 & 0xFFFFFFFFFFFFFFF8LL, a3, v32, v33, v34, v35);
      v38 = 0;
      if ( v36 )
      {
LABEL_44:
        if ( (*(_BYTE *)(v36 + 68) & 1) == 0 || *(_QWORD *)(v36 + 40) )
          ++v38;
        while ( 1 )
        {
          v39 = *(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v36 = v39;
          if ( !v39 )
            break;
          if ( (*(_BYTE *)(v39 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_44;
        }
      }
      if ( (unsigned __int8)sub_184ABB0(a1, a3, v27, v9, v41, v37) )
LABEL_54:
        v14 = 0;
      else
        v14 = v38 + 1;
      if ( ptr != v47 )
        free(ptr);
      v30 = v43;
    }
    goto LABEL_31;
  }
  v30 = v43;
  if ( !v44 )
  {
    if ( v43 <= 0x40 )
    {
      LODWORD(v31) = 0;
      if ( v43 )
        v31 = (__int64)((_QWORD)v42 << (64 - (unsigned __int8)v43)) >> (64 - (unsigned __int8)v43);
      goto LABEL_38;
    }
    goto LABEL_41;
  }
  LODWORD(v31) = (_DWORD)v42;
  if ( v43 > 0x40 )
LABEL_41:
    v31 = *(_QWORD *)v42;
LABEL_38:
  v14 = v31 + 1;
LABEL_31:
  if ( v30 > 0x40 && v42 )
    operator delete[](v42);
  return v14;
}
