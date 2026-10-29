_QWORD *__fastcall sub_22A9560(_QWORD *a1, unsigned int *a2)
{
  __int64 *v2; // rdi
  char v3; // r13
  __int64 v4; // r14
  size_t v5; // rax
  __int64 *v6; // r10
  __int64 *v7; // rax
  _BYTE *v8; // rdx
  void *v9; // r11
  size_t v10; // r12
  unsigned int v11; // r15d
  unsigned int v12; // ebx
  char *v13; // rdi
  __int64 *v14; // rax
  void **v15; // rax
  void *v17; // [rsp+8h] [rbp-B0h]
  __int64 *v18; // [rsp+8h] [rbp-B0h]
  void *v20[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v21[16]; // [rsp+30h] [rbp-88h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+40h] [rbp-78h] BYREF
  int v23; // [rsp+48h] [rbp-70h]
  __int128 v24; // [rsp+50h] [rbp-68h]
  void *dest; // [rsp+60h] [rbp-58h]
  char v26; // [rsp+68h] [rbp-50h]
  int v27; // [rsp+6Ch] [rbp-4Ch]
  void **v28; // [rsp+70h] [rbp-48h]

  v20[0] = v21;
  v28 = v20;
  v22 = &off_2BEBE68;
  v20[1] = nullptr;
  v21[0] = 0;
  v23 = 0;
  v26 = 0;
  v27 = 1;
  dest = nullptr;
  v24 = 0;
  sub_227B8B0((__int64)&v22, 0, 0, 0);
  if ( *((_QWORD *)&v24 + 1) - (_QWORD)dest > 1u )
  {
    v2 = (__int64 *)&v22;
    *(_WORD *)dest = 30322;
    dest = (char *)dest + 2;
  }
  else
  {
    v2 = sub_227BF10((__int64 *)&v22, (unsigned __int8 *)"rv", 2u);
  }
  v3 = 1;
  sub_227B910((__int64)v2, *a2);
  v4 = *((_QWORD *)a2 + 6);
  if ( (unsigned int *)v4 != a2 + 8 )
  {
    while ( 1 )
    {
      v9 = *(void **)(v4 + 32);
      v10 = *(_QWORD *)(v4 + 40);
      v11 = *(_DWORD *)(v4 + 64);
      v12 = *(_DWORD *)(v4 + 68);
      v13 = (char *)dest;
      if ( v3 )
        break;
      if ( dest != *((void **)&v24 + 1) )
      {
        *(_BYTE *)dest = 95;
        v6 = (__int64 *)&v22;
        v13 = (char *)dest + 1;
        dest = v13;
        v5 = *((_QWORD *)&v24 + 1) - (_QWORD)v13;
LABEL_6:
        if ( v10 <= v5 )
          goto LABEL_7;
        goto LABEL_15;
      }
      v17 = *(void **)(v4 + 32);
      v14 = sub_227BF10((__int64 *)&v22, (unsigned __int8 *)"_", 1u);
      v9 = v17;
      v13 = (char *)v14[4];
      v6 = v14;
      if ( v10 <= v14[3] - (__int64)v13 )
      {
LABEL_7:
        if ( v10 )
        {
          v18 = v6;
          memcpy(v13, v9, v10);
          v18[4] += v10;
        }
        goto LABEL_9;
      }
LABEL_15:
      sub_227BF10(v6, (unsigned __int8 *)v9, v10);
LABEL_9:
      v7 = (__int64 *)sub_227B910((__int64)&v22, v11);
      v8 = (_BYTE *)v7[4];
      if ( v8 == (_BYTE *)v7[3] )
      {
        v7 = sub_227BF10(v7, (unsigned __int8 *)"p", 1u);
      }
      else
      {
        *v8 = 112;
        ++v7[4];
      }
      sub_227B910((__int64)v7, v12);
      v4 = std::_Rb_tree_increment(v4);
      if ( a2 + 8 == (unsigned int *)v4 )
        goto LABEL_18;
    }
    v5 = *((_QWORD *)&v24 + 1) - (_QWORD)dest;
    v3 = 0;
    v6 = (__int64 *)&v22;
    goto LABEL_6;
  }
LABEL_18:
  v15 = v28;
  *a1 = a1 + 2;
  sub_22A8A10(a1, *v15, (__int64)v15[1] + (_QWORD)*v15);
  v22 = &off_2BEBE68;
  sub_227B7A0((__int64)&v22);
  if ( v20[0] != v21 )
    operator delete(v20[0]);
  return a1;
}
