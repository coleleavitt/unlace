__int64 __fastcall sub_1CD1E20(__int64 a1, __int64 a2, __int64 a3, __m128 *a4, int a5, char a6)
{
  __int64 result; // rax
  __int64 v11; // r12
  int v12; // eax
  _QWORD *v13; // r8
  int v14; // edx
  void **v15; // rcx
  __int64 *p_ptr; // r9
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // r10
  unsigned __int8 v26; // [rsp+8h] [rbp-2E0h]
  unsigned __int64 v27; // [rsp+10h] [rbp-2D8h]
  __int64 *v29; // [rsp+18h] [rbp-2D0h]
  _QWORD *v30; // [rsp+18h] [rbp-2D0h]
  char *v31; // [rsp+20h] [rbp-2C8h]
  void *v32; // [rsp+38h] [rbp-2B0h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-2A8h] BYREF
  __int128 v34; // [rsp+50h] [rbp-298h]
  __int64 v35; // [rsp+60h] [rbp-288h] BYREF
  void *ptr; // [rsp+70h] [rbp-278h] BYREF
  __int64 v37; // [rsp+78h] [rbp-270h]
  _BYTE v38[256]; // [rsp+80h] [rbp-268h] BYREF
  __int64 v39; // [rsp+180h] [rbp-168h]
  void *v40; // [rsp+190h] [rbp-158h] BYREF
  __int64 v41; // [rsp+198h] [rbp-150h]
  _QWORD v42[32]; // [rsp+1A0h] [rbp-148h] BYREF
  __int64 v43; // [rsp+2A0h] [rbp-48h]

  result = sub_1CBF860(a1, a3);
  if ( !(_BYTE)result )
  {
    sub_F22A90(&v40, *(_QWORD *)(a3 + 24));
    v32 = v40;
    v27 = sub_F22BD0((__int64 *)&v32, 0);
    v11 = sub_F22F90((__int64 *)&v32);
    v12 = *(_DWORD *)(a3 + 4);
    *(_QWORD *)&v34 = *(_QWORD *)(a3 + 8);
    DWORD2(v34) = v12;
    sub_B85890(&v35, v34);
    v14 = *(_DWORD *)(a3 + 36);
    v39 = 0;
    ptr = v38;
    v15 = &v40;
    v37 = 0x800000000LL;
    if ( !v14 )
      goto LABEL_4;
    v20 = *(_QWORD *)(a3 + 36);
    v41 = 0x800000000LL;
    v33[0] = a3 + 56;
    v21 = *(unsigned int *)(a3 + 44);
    v43 = v20;
    v40 = v42;
    v33[1] = v21;
    sub_1CB4530(a1, v33, (__int64 *)&v40);
    sub_1CB6C40((char ***)&ptr, (char ***)&v40);
    v13 = v42;
    v39 = v43;
    if ( v40 != v42 )
      free(v40);
    if ( !a5 && !a6 )
    {
      v22 = ptr;
      v31 = (char *)ptr + 32 * (unsigned int)v37;
      if ( v31 != ptr )
      {
        do
        {
          v23 = v22[1];
          v30 = v22;
          v40 = (void *)*v22;
          v41 = v23;
          v24 = v22[3];
          v42[0] = v22[2];
          v42[1] = v24;
          result = sub_1E52D80(a1, 21, (_DWORD)v22, (_DWORD)v15, (_DWORD)v13, v42[0], (_DWORD)v40, v23, v42[0], v24);
          if ( (_BYTE)result )
            goto LABEL_10;
          v22 = v30 + 4;
        }
        while ( v31 != (char *)(v30 + 4) );
      }
    }
    if ( *(_DWORD *)(a3 + 36) )
      p_ptr = (__int64 *)&ptr;
    else
LABEL_4:
      p_ptr = nullptr;
    if ( !v11 )
      v11 = v27;
    v17 = 0;
    v18 = 0;
    if ( *(_QWORD *)(a2 + 8) )
    {
      v29 = p_ptr;
      v19 = sub_15AB9E0(a2, *(_QWORD **)(a1 + 248), 0, (__int64)v15, (__int64)v13, (__int64)p_ptr);
      p_ptr = v29;
      v17 = v19;
    }
    result = sub_1CD1CD0(a1, v17, v18, v27, v11, p_ptr, v34, v35, a4, a5);
LABEL_10:
    if ( ptr != v38 )
    {
      v26 = result;
      free(ptr);
      return v26;
    }
  }
  return result;
}
