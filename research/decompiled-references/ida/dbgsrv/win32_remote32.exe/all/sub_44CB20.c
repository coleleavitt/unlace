/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44CB20
// Address: 0x0044CB20

//----- (0044CB20) --------------------------------------------------------
void __usercall sub_44CB20(int a1@<ecx>, __m128i a2@<xmm0>)
{
  int *v3; // esi
  void *v4; // edi
  unsigned int v5; // kr00_4
  void *v6; // eax
  int v7; // esi
  const char *v8; // ecx
  const char *v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // eax
  int v13; // esi
  unsigned int v14; // eax
  int v15; // edx
  const char *v16; // edx
  const char *v17; // ecx
  char *v18; // eax
  int *v19; // edi
  _DWORD *v20; // eax
  _DWORD *v21; // esi
  _DWORD *v22; // eax
  const char *v23; // eax
  const char *v24; // edi
  const char *v25; // eax
  int v26; // [esp-8h] [ebp-70h]
  void *v27; // [esp-4h] [ebp-6Ch]
  int v28; // [esp+14h] [ebp-54h] BYREF
  void *v29; // [esp+18h] [ebp-50h] BYREF
  int v30; // [esp+1Ch] [ebp-4Ch]
  int v31; // [esp+20h] [ebp-48h]
  __int16 v32; // [esp+24h] [ebp-44h]
  void *v33; // [esp+28h] [ebp-40h] BYREF
  int v34; // [esp+2Ch] [ebp-3Ch]
  int v35; // [esp+30h] [ebp-38h]
  void *v36; // [esp+34h] [ebp-34h] BYREF
  int v37; // [esp+38h] [ebp-30h]
  int v38; // [esp+3Ch] [ebp-2Ch]
  char *v39; // [esp+40h] [ebp-28h] BYREF
  char *v40; // [esp+44h] [ebp-24h] BYREF
  int v41; // [esp+48h] [ebp-20h]
  int v42; // [esp+4Ch] [ebp-1Ch]
  void *v43; // [esp+50h] [ebp-18h] BYREF
  int v44; // [esp+54h] [ebp-14h]
  unsigned int v45; // [esp+58h] [ebp-10h]
  int v46; // [esp+64h] [ebp-4h]
  CHAR pNodeBuffer[1028]; // [esp+68h] [ebp+0h] BYREF
  _DWORD v48[7]; // [esp+46Ch] [ebp+404h] BYREF

  v3 = (int *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = sub_44D560(*(_BYTE *)(a1 + 66));
  v28 = 44;
  v29 = nullptr;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = nullptr;
  v34 = 0;
  v35 = 0;
  v36 = nullptr;
  v37 = 0;
  v38 = 0;
  v4 = (void *)(a1 + 8);
  v46 = 0;
  sub_403330((int)&v29, (unsigned int *)(a1 + 8));
  v32 = *(_WORD *)(a1 + 64);
  sub_403330((int)&v33, (unsigned int *)(a1 + 20));
  sub_403330((int)&v36, (unsigned int *)(a1 + 32));
  if ( !(unsigned __int8)sub_44D550(*(_DWORD *)(a1 + 44), (int)&v28) )
  {
    if ( sub_404C70((_DWORD *)(a1 + 8)) )
      v24 = "0.0.0.0";
    else
      v24 = (const char *)sub_40CCE0((void *)(a1 + 8));
    v25 = (const char *)sub_44D800(*v3);
    sub_44D450(a1, a2, "%s:%u: %s\n", v24, *(unsigned __int16 *)(a1 + 64), v25);
    sub_44D810((_DWORD *)(a1 + 44), -1);
    sub_46BC95(1u);
    JUMPOUT(0x44D04B);
  }
  v43 = nullptr;
  v44 = 0;
  v45 = 0;
  v40 = nullptr;
  v41 = 0;
  v42 = 0;
  LOBYTE(v46) = 2;
  sub_44D7D0(*v3, (int)&v40, 0);
  if ( sub_461550(pNodeBuffer, 2u) )
  {
    v5 = strlen(pNodeBuffer);
    if ( v5 )
    {
      if ( v5 + 1 <= v45 )
      {
        v6 = v43;
      }
      else
      {
        v6 = sub_453B00((int)&v43, v43, v5 + 1, 1u);
        v43 = v6;
      }
      v44 = v5 + 1;
      sub_464310((unsigned int)v6, (unsigned int)pNodeBuffer, v5);
      *((_BYTE *)v43 + v5) = 0;
      v7 = v44;
      if ( v44 )
      {
        v4 = v43;
        v8 = (const char *)v43;
LABEL_11:
        v9 = MultiByteStr;
        if ( v41 )
          v9 = v40;
        v10 = strcmp(v9, v8);
        if ( v10 )
          v10 = v10 < 0 ? -1 : 1;
        if ( v10 )
        {
          v11 = v7 != 0 ? v7 - 1 : 0;
          v12 = v11 + 9;
          if ( v11 + 9 > v45 )
          {
            v4 = sub_453B00((int)&v43, v4, v11 + 9, 1u);
            v12 = v11 + 9;
            v43 = v4;
          }
          v44 = v12;
          *((_BYTE *)v4 + v11 + 8) = 0;
          if ( v11 )
          {
            sub_464310((unsigned int)v43 + 8, (unsigned int)v43, v11);
            v11 = 0;
          }
          sub_464310((unsigned int)v43 + v11, (unsigned int)" (my ip ", 8u);
          v13 = v44 != 0 ? v44 - 1 : 0;
          v4 = (void *)(v13 + 2);
          if ( v13 + 2 > v45 )
            v43 = sub_453B00((int)&v43, v43, v13 + 2, 1u);
          v44 = v13 + 2;
          *((_BYTE *)v43 + v13 + 1) = 0;
          *((_BYTE *)v43 + v13) = 41;
        }
        else if ( v4 )
        {
          v44 = 0;
          sub_453A20(v4);
          v43 = nullptr;
          v45 = 0;
        }
        goto LABEL_26;
      }
    }
    else
    {
      v7 = 0;
      v44 = 0;
    }
    v4 = v43;
    v8 = MultiByteStr;
    goto LABEL_11;
  }
LABEL_26:
  v14 = sub_453720();
  sub_44D8F0((int)v4, a2, v48, 25, v14, v15, 0);
  v16 = MultiByteStr;
  v17 = MultiByteStr;
  if ( v44 )
    v17 = (const char *)v43;
  if ( v41 )
    v16 = v40;
  sub_44D450(a1, a2, "%s Listening on %s:%u%s...\n", (const char *)v48, v16, *(unsigned __int16 *)(a1 + 64), v17);
  while ( *(_DWORD *)(a1 + 44) )
  {
    v18 = sub_44D560(*(_BYTE *)(a1 + 66));
    v26 = *(_DWORD *)(a1 + 44);
    v39 = v18;
    if ( (unsigned __int8)sub_44D510((int)v18, v26)
      && (v19 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a1 + 8))(a1, v39)) != nullptr )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 48) + 12))(*(_DWORD *)(a1 + 48)) )
      {
        v20 = sub_4627C2(0xCu);
        v21 = v20;
        LOBYTE(v46) = 3;
        if ( v20 )
        {
          *v20 = a1;
          v20[1] = v19;
          v20[2] = sub_456310(nullptr, 0);
        }
        else
        {
          v21 = nullptr;
        }
        LOBYTE(v46) = 2;
        v22 = sub_456450((LPTHREAD_START_ROUTINE)sub_44D370, v21);
        if ( v22 )
        {
          sub_44C970((_DWORD **)a1, (unsigned int)v19, (int)v22);
          if ( v21[2] )
            sub_456350((HANDLE)v21[2]);
        }
        else
        {
          v23 = (const char *)sub_45CA00(a1, a2, 0xFFFFFFFF);
          sub_442A00(a2, (int)v19, "Failed to create thread: %s; cannot handle session\n", v23);
          (*(void (__thiscall **)(int *, int))*v19)(v19, 1);
          if ( v21 )
          {
            v27 = (void *)v21[2];
            LOBYTE(v46) = 4;
            *v21 = 0;
            v21[1] = 0;
            sub_456330(v27);
            v21[2] = 0;
            LOBYTE(v46) = 2;
            sub_4627F2(v21);
          }
        }
      }
      else
      {
        sub_44C970((_DWORD **)a1, (unsigned int)v19, 0);
        sub_44D060(a2, a1, v19);
      }
    }
    else
    {
      sub_44D810(&v39, -1);
      if ( !*(_DWORD *)(a1 + 44) )
        break;
      sub_44D450(a1, a2, "Rejected client\n");
    }
  }
  LOBYTE(v46) = 5;
  if ( v40 )
  {
    v41 = 0;
    sub_453A20(v40);
    v40 = nullptr;
    v42 = 0;
  }
  LOBYTE(v46) = 6;
  if ( v43 )
  {
    v44 = 0;
    sub_453A20(v43);
    v43 = nullptr;
    v45 = 0;
  }
  v46 = 7;
  if ( v36 )
  {
    v37 = 0;
    sub_453A20(v36);
    v36 = nullptr;
    v38 = 0;
  }
  v46 = 8;
  if ( v33 )
  {
    v34 = 0;
    sub_453A20(v33);
    v33 = nullptr;
    v35 = 0;
  }
  v46 = 9;
  if ( v29 )
  {
    v30 = 0;
    sub_453A20(v29);
  }
}
// 44D046: control flows out of bounds to 44D04B
// 44CDB3: variable 'v15' is possibly undefined
