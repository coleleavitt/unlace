/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80715F0
// Address: 0x080715F0

//----- (080715F0) --------------------------------------------------------
int __usercall sub_80715F0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int (***a4)())
{
  __m128i v4; // xmm3
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned __int64 v7; // xmm0_8
  unsigned __int64 v8; // rax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int *v14; // ebx
  int (*v15)(); // eax
  int result; // eax
  char *v17; // edx
  char *v18; // edi
  void *v19; // ecx
  void *v20; // ecx
  __int64 v21; // [esp-10h] [ebp-B0h]
  int v22; // [esp+0h] [ebp-A0h]
  int v23; // [esp+0h] [ebp-A0h]
  int v26; // [esp+10h] [ebp-90h]
  int v27; // [esp+14h] [ebp-8Ch]
  int v28; // [esp+18h] [ebp-88h]
  int v29; // [esp+18h] [ebp-88h]
  int v30; // [esp+34h] [ebp-6Ch] BYREF
  void *ptr; // [esp+38h] [ebp-68h] BYREF
  int v32; // [esp+3Ch] [ebp-64h]
  int v33; // [esp+40h] [ebp-60h]
  _DWORD v34[2]; // [esp+48h] [ebp-58h] BYREF
  __int64 v35; // [esp+50h] [ebp-50h]
  unsigned __int64 v36; // [esp+58h] [ebp-48h]
  int v37; // [esp+60h] [ebp-40h]
  void *v38; // [esp+64h] [ebp-3Ch]
  int v39; // [esp+68h] [ebp-38h]
  int v40; // [esp+6Ch] [ebp-34h]
  int v41; // [esp+70h] [ebp-30h]
  int v42; // [esp+74h] [ebp-2Ch]
  int v43; // [esp+78h] [ebp-28h]
  int v44; // [esp+7Ch] [ebp-24h]
  unsigned int v45; // [esp+84h] [ebp-1Ch]

  v4 = _mm_loadl_epi64((const __m128i *)(a2 + 56));
  v45 = __readgsdword(0x14u);
  v35 = *(_QWORD *)(a2 + 24);
  v34[1] = a1;
  v36 = 0;
  v38 = nullptr;
  v39 = 0;
  v34[0] = &off_811B8C0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v37 = _mm_cvtsi128_si32(v4);
  v5 = sub_806C340((_DWORD *)(a1 + 40), a2);
  v7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(v6)).m128i_u64[0];
  if ( v37 )
  {
    v8 = v7 / _mm_and_si128(v4, _mm_load_si128((const __m128i *)&xmmword_80DE190)).m128i_u64[0];
    v7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(HIDWORD(v8))).m128i_u64[0];
  }
  v36 = v7;
  v9 = 0;
  while ( (unsigned __int8)sub_8070F20((int)v34, &v30) )
  {
    if ( !v9 )
    {
      if ( !(unsigned __int8)sub_8070F20((int)v34, &v30) )
        break;
      v9 = 1;
    }
    v10 = *(unsigned __int16 *)(v30 + 30);
    if ( !*(_WORD *)(v30 + 30)
      || v10 == 65280
      || v10 == 65311
      || v10 == 65521
      || (v11 = *(_DWORD *)(v30 + 24), (*(_BYTE *)(v30 + 28) & 0xFu) - 1 > 1)
      || !v11 )
    {
LABEL_26:
      ++v9;
    }
    else
    {
      v12 = *(_DWORD *)(v30 + 32);
      ptr = nullptr;
      v32 = 0;
      v33 = 0;
      if ( dword_811E604 != -1 )
        v12 -= dword_811E604;
      v22 = v12;
      HIDWORD(v21) = v11;
      v13 = a1 + 260;
      if ( a3 != 2 )
        v13 = a1 + 228;
      LODWORD(v21) = v13;
      sub_806E910(a1, (__m128i **)&ptr, v21);
      v14 = &dword_80DDFD8;
      v15 = **a4;
      if ( v32 )
        v14 = (int *)ptr;
      if ( v15 != sub_8054750 )
      {
        result = ((int (__cdecl *)(int (***)(), int, int *))v15)(a4, v22, v14);
        if ( ptr )
        {
          v23 = result;
          v32 = 0;
          sub_80CF780(ptr);
          result = v23;
        }
        if ( result )
          goto LABEL_28;
        goto LABEL_26;
      }
      if ( !ptr )
        goto LABEL_26;
      v32 = 0;
      ++v9;
      sub_80CF780(ptr);
    }
  }
  result = 0;
LABEL_28:
  v17 = (char *)v38;
  v34[0] = &off_811B8C0;
  if ( v38 )
  {
    if ( v39 )
    {
      v27 = v39;
      v28 = 0;
      v26 = result;
      do
      {
        v18 = &v17[68 * v28];
        v19 = *((void **)v18 + 3);
        if ( v19 )
        {
          *((_DWORD *)v18 + 4) = 0;
          sub_80CF780(v19);
        }
        v20 = *(void **)v18;
        if ( *(_DWORD *)v18 )
        {
          *((_DWORD *)v18 + 1) = 0;
          sub_80CF780(v20);
        }
        ++v28;
        v17 = (char *)v38;
      }
      while ( v27 != v28 );
      result = v26;
    }
    v29 = result;
    v39 = 0;
    sub_80CF780(v17);
    result = v29;
  }
  if ( v45 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80716A4: variable 'v6' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 80DE190: using guessed type __int128 xmmword_80DE190;
// 811B8C0: using guessed type int (__cdecl *off_811B8C0)(int);
// 811E604: using guessed type int dword_811E604;
