__int64 __fastcall sub_D8FFE0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  __int64 (*v12)(void); // rax
  _QWORD **v13; // rdi
  __int64 (*v14)(void); // rdx
  __int64 v15; // rax
  __int64 *v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r15d
  unsigned __int64 v21; // rbx
  unsigned int v22; // eax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rbx
  void *v28; // rdi
  __int64 v29; // rdx
  unsigned __int64 v30; // rsi
  __int64 result; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rbp
  __int64 v36; // rbx
  unsigned __int64 v37; // rsi
  __int64 v38; // rbp
  __int64 v39; // r13
  __int64 v40; // rdx
  __int64 v41; // r14
  unsigned int v42; // [rsp+Ch] [rbp-4Ch]
  void *v43; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v44; // [rsp+18h] [rbp-40h]

  v8 = sub_CE6180(a1[23], a3, a3, a4, a5);
  v9 = (_QWORD *)a1[3];
  v10 = v8;
  v11 = HIDWORD(v8);
  v12 = *(__int64 (**)(void))(*v9 + 104LL);
  if ( (char *)v12 == (char *)sub_D8A670 )
  {
    v13 = (_QWORD **)v9[3];
    v14 = (__int64 (*)(void))(*v13)[13];
    if ( v14 == v12 )
      v15 = (*(__int64 (__fastcall **)(_QWORD *))(*v13[3] + 104LL))(v13[3]);
    else
      v15 = v14();
  }
  else
  {
    v15 = v12();
  }
  v16 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v17 = sub_A97D20(v15, *v16);
  v20 = v17;
  v42 = v17;
  if ( (_BYTE)v11 )
  {
    if ( (_DWORD)v10 == 9 )
    {
      v24 = ((unsigned __int64)v17 + 63) >> 6;
      if ( v24 == 1 )
      {
        v28 = nullptr;
        v27 = 0;
      }
      else
      {
        v25 = a1[71];
        v26 = 8 * v24;
        a1[81] += v26;
        v27 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( a1[72] >= v26 + v27 && v25 )
        {
          a1[71] = v26 + v27;
          v28 = (void *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        }
        else
        {
          v28 = (void *)sub_986170((__int64)(a1 + 71), v26, v26, 3, v18, v19);
          v27 = (unsigned __int64)v28;
        }
      }
      v29 = *(unsigned int *)(a2 + 8);
      v30 = *(_QWORD *)a2;
      if ( (unsigned int)v29 <= 0x40 )
      {
        v27 = 0;
        if ( (_DWORD)v29 )
          v27 = (__int64)(v30 << (64 - (unsigned __int8)v29)) >> (64 - (unsigned __int8)v29);
        goto LABEL_24;
      }
    }
    else
    {
      if ( (_DWORD)v10 != 8 )
        goto LABEL_7;
      v32 = ((unsigned __int64)v17 + 63) >> 6;
      if ( v32 == 1 )
      {
        v28 = nullptr;
        v27 = 0;
      }
      else
      {
        v33 = a1[71];
        v34 = 8 * v32;
        a1[81] += v34;
        v27 = (v33 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( a1[72] >= v34 + v27 && v33 )
        {
          a1[71] = v34 + v27;
          v28 = (void *)((v33 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        }
        else
        {
          v28 = (void *)sub_986170((__int64)(a1 + 71), v34, v34, 3, v18, v19);
          v27 = (unsigned __int64)v28;
        }
      }
      v29 = *(unsigned int *)(a2 + 8);
      v30 = *(_QWORD *)a2;
      if ( (unsigned int)v29 <= 0x40 )
      {
        v27 = *(_QWORD *)a2;
LABEL_24:
        result = sub_E216C0(a1[22], 16);
        *(_QWORD *)result = v27;
        *(_DWORD *)(result + 8) = v20;
        return result;
      }
    }
    memcpy(v28, (const void *)v30, 8 * ((unsigned __int64)(v29 + 63) >> 6));
    goto LABEL_24;
  }
LABEL_7:
  if ( !(unsigned __int8)sub_F65240(*v16) )
  {
    v21 = *(_QWORD *)a2;
    if ( *(_DWORD *)(a2 + 8) > 0x40u )
      v21 = *(_QWORD *)v21;
    switch ( v10 )
    {
      case 0uLL:
      case 1uLL:
        goto LABEL_34;
      case 2uLL:
      case 3uLL:
        goto LABEL_33;
      case 4uLL:
      case 5uLL:
        goto LABEL_31;
      case 6uLL:
      case 7uLL:
        goto LABEL_32;
      case 8uLL:
        goto LABEL_35;
      case 9uLL:
        v38 = a1[22];
        v39 = sub_D8C2C0(v21, v20);
        v41 = v40;
        result = sub_E216C0(v38, 16);
        *(_QWORD *)result = v39;
        *(_QWORD *)(result + 8) = v41;
        return result;
      case 0xAuLL:
        goto LABEL_40;
      default:
        BUG();
    }
  }
  v22 = *(_DWORD *)(a2 + 8);
  v23 = *(_QWORD *)a2;
  if ( v22 > 0x40 )
  {
    v21 = *(_QWORD *)v23;
  }
  else
  {
    v21 = 0;
    if ( v22 )
      v21 = (__int64)(v23 << (64 - (unsigned __int8)v22)) >> (64 - (unsigned __int8)v22);
  }
  switch ( (int)v10 )
  {
    case 0:
    case 1:
LABEL_34:
      result = sub_E216C0(a1[22], 8);
      *(_BYTE *)result = v21;
      return result;
    case 2:
    case 3:
LABEL_33:
      result = sub_E216C0(a1[22], 8);
      *(_WORD *)result = v21;
      return result;
    case 4:
    case 5:
LABEL_31:
      result = sub_E216C0(a1[22], 8);
      *(_DWORD *)result = v21;
      return result;
    case 6:
    case 7:
LABEL_32:
      result = sub_E216C0(a1[22], 8);
      *(_QWORD *)result = v21;
      return result;
    case 8:
LABEL_35:
      v35 = a1[22];
      if ( !v20 )
      {
        v43 = (void *)v21;
        v42 = 64;
        goto LABEL_38;
      }
      v44 = v20;
      if ( v20 <= 0x40 )
      {
        v43 = (void *)v21;
LABEL_38:
        v36 = (__int64)v43;
        goto LABEL_39;
      }
      sub_2205470(&v43, v21, 0);
      v42 = v44;
      if ( v44 <= 0x40 )
        goto LABEL_38;
      goto LABEL_51;
    case 9:
      v35 = a1[22];
      if ( !v20 )
      {
        v43 = (void *)v21;
        v37 = v21;
        v42 = 64;
LABEL_48:
        v36 = (__int64)(v37 << (64 - (unsigned __int8)v42)) >> (64 - (unsigned __int8)v42);
        goto LABEL_39;
      }
      v44 = v20;
      if ( v20 > 0x40 )
      {
        sub_2205470(&v43, v21, 1);
        v42 = v44;
      }
      else
      {
        v43 = (void *)(v21 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v20));
      }
      if ( v42 > 0x40 )
      {
LABEL_51:
        v36 = (__int64)v43;
        if ( v43 )
          operator delete[](v43);
      }
      else
      {
        v37 = (unsigned __int64)v43;
        if ( v42 )
          goto LABEL_48;
        v36 = 0;
      }
LABEL_39:
      result = sub_E216C0(v35, 16);
      *(_QWORD *)result = v36;
      *(_DWORD *)(result + 8) = v42;
      break;
    case 10:
LABEL_40:
      result = sub_E216C0(a1[22], 8);
      *(_BYTE *)result = v21 != 0;
      return result;
  }
  return result;
}
