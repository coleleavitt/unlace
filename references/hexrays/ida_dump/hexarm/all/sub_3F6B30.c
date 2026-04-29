unsigned __int64 __fastcall sub_3F6B30(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5, double a6)
{
  int v9; // ebx
  unsigned __int8 v10; // al
  unsigned int dtype_size; // r14d
  char v12; // al
  int v13; // r9d
  __int64 v14; // r13
  unsigned __int8 dtype_by_size; // al
  int v16; // r14d
  unsigned __int64 result; // rax
  int v18; // r14d
  int v19; // edi
  int v20; // r15d
  int v21; // esi
  int v22; // eax
  int v23; // ebx
  __int64 v24; // rax
  int *v25; // rdi
  __int64 (__fastcall *v26)(__int64, int); // rdx
  __int64 v27; // rsi
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // eax
  char v32; // al
  int v35; // [rsp+10h] [rbp-68h]
  int v36; // [rsp+10h] [rbp-68h]
  int v37; // [rsp+1Ch] [rbp-5Ch]
  int v38; // [rsp+20h] [rbp-58h]
  int v39; // [rsp+24h] [rbp-54h]
  int v40; // [rsp+28h] [rbp-50h]
  int v41; // [rsp+2Ch] [rbp-4Ch]
  int v42; // [rsp+30h] [rbp-48h]
  int v43; // [rsp+34h] [rbp-44h]
  unsigned int v44; // [rsp+38h] [rbp-40h]
  bool v45; // [rsp+3Eh] [rbp-3Ah]
  unsigned __int8 v46; // [rsp+3Fh] [rbp-39h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 && *(_BYTE *)(a5 + 34) == 0xFF )
    return sub_3F6940(a1, a3, a4, a5, a6);
  if ( a3 != 1 )
  {
    v9 = 1;
    v10 = sub_3EE110(a1, a5, a6);
    dtype_size = get_dtype_size(v10);
    v12 = sub_3EE030(a1, a5);
    v41 = 1;
    v13 = a3;
    if ( v12 )
    {
      v31 = sub_3EE210(a1, a5, a6);
      v13 = a3;
      v41 = dtype_size / v31;
    }
    goto LABEL_6;
  }
  v9 = *(_DWORD *)(a5 + 8);
  v46 = sub_3EE110(a1, a5, a6);
  LODWORD(v14) = get_dtype_size(v46);
  v32 = sub_3EE030(a1, a5);
  v41 = 1;
  v13 = 1;
  if ( !v32 )
  {
LABEL_6:
    v35 = v13;
    v14 = (unsigned int)sub_3EE210(a1, a5, a6);
    dtype_by_size = get_dtype_by_size(v14);
    v13 = v35;
    v46 = dtype_by_size;
  }
  v37 = 163;
  v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 84LL);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 )
    v37 = 61;
  v36 = v13;
  v16 = *(unsigned __int16 *)(a5 + 6) - v37;
  result = sub_3EE270(a1, a5, a6);
  v38 = result;
  if ( v9 > 0 )
  {
    result = (unsigned int)(v16 + v9 + v36);
    v45 = v41 != 1 || v9 != 1;
    v44 = v16 + v9 + v36;
    if ( v41 > 0 )
    {
      v18 = v36 + v16;
      v19 = v36;
LABEL_12:
      while ( 2 )
      {
        v20 = 0;
        v21 = 0;
        v42 = v18 - v19;
        while ( v19 <= 0 )
        {
          ++v21;
          v20 += v14;
          if ( v41 == v21 )
          {
            result = v44;
            if ( ++v18 != v44 )
              goto LABEL_12;
            return result;
          }
        }
        v43 = v19;
        v22 = v21;
        do
        {
          v40 = v22;
          v23 = v42;
          do
          {
            v25 = *(int **)(a1 + 832);
            v26 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v25 + 168LL);
            v27 = (unsigned int)(v37 + v23 % 32);
            if ( v26 == sub_3EA010 )
            {
              v28 = sub_3EA010((__int64)v25, v27);
            }
            else
            {
              v30 = v26((__int64)v25, v27);
              v25 = *(int **)(a1 + 832);
              v28 = v30;
            }
            v29 = v20 + v38 + v28;
            if ( a2 == 1 )
              v24 = sub_3F56D0(a1, 1u, v46, v29, v25[16], a4, v39);
            else
              v24 = sub_3F56D0(a1, a2, v46, v25[16], a4, v29, v39);
            if ( v24 )
            {
              if ( v45 )
                *(_DWORD *)(v24 + 4) |= 0x10000u;
            }
            ++v23;
            sub_3F68B0(a1, a4, v14, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL));
          }
          while ( v23 != v18 );
          v20 += v14;
          v22 = v40 + 1;
        }
        while ( v41 != v40 + 1 );
        result = v44;
        ++v18;
        v19 = v43;
        if ( v18 != v44 )
          continue;
        break;
      }
    }
  }
  return result;
}
