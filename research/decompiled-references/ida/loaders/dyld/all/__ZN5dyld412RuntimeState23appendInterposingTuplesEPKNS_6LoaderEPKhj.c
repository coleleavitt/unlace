void __fastcall dyld4::RuntimeState::appendInterposingTuples(
        dyld4::RuntimeState *this,
        const dyld4::Loader *a2,
        const unsigned __int8 *a3)
{
  dyld4::RuntimeState *v6; // x0
  const dyld4::Loader *v7; // x1
  const unsigned __int8 *v8; // x2
  unsigned int v9; // w3
  __int64 v10; // x12
  __int64 v11; // x8
  unsigned __int64 v12; // x9
  __int64 *v13; // x10
  unsigned int v14; // w8
  __int64 v15; // x11
  _OWORD *v16; // x9
  const unsigned __int8 *v17; // x22
  dyld3::MachOFile *v18; // x24
  char hasChainedFixups; // w0
  __int64 Address; // x0
  __int64 v21; // x8
  __int64 v22; // x28
  __int64 v23; // x26
  __int64 v24; // x22
  __int64 v25; // x24
  __int64 v26; // x8
  __int64 v27; // x27
  __int64 *v28; // x9
  __int64 v29; // x10
  char v30; // w22
  __int64 v31; // x8
  __int64 v32; // x9
  _QWORD *v33; // x8
  const char *v34; // x0
  __int64 v35; // x24
  __int64 v36; // x8
  __int64 v37; // x9
  _QWORD *v38; // x10
  __int64 *v39; // x10
  __int64 v40; // x8
  _QWORD *v41; // x22
  __int64 v42; // x24
  __int64 v43; // x27
  __int64 v44; // x25
  __int64 v45; // x8
  __int64 v46; // x9
  _QWORD *v47; // x8
  const char *v48; // x0
  vm_address_t *v49[2]; // [xsp+20h] [xbp-460h] BYREF
  char *v50; // [xsp+30h] [xbp-450h]
  _QWORD v51[12]; // [xsp+38h] [xbp-448h] BYREF
  _QWORD v52[10]; // [xsp+98h] [xbp-3E8h] BYREF
  _QWORD v53[12]; // [xsp+E8h] [xbp-398h] BYREF
  __int64 v54; // [xsp+148h] [xbp-338h] BYREF
  __int64 *v55; // [xsp+150h] [xbp-330h]
  __int64 v56; // [xsp+158h] [xbp-328h]
  __int64 (__fastcall *v57)(); // [xsp+160h] [xbp-320h]
  __int64 (__fastcall *v58)(); // [xsp+168h] [xbp-318h]
  __int64 v59; // [xsp+170h] [xbp-310h] BYREF
  __int64 v60; // [xsp+178h] [xbp-308h] BYREF
  __int64 *v61; // [xsp+180h] [xbp-300h]
  __int64 v62; // [xsp+188h] [xbp-2F8h]
  __int64 (__fastcall *v63)(); // [xsp+190h] [xbp-2F0h]
  __int64 (__fastcall *v64)(); // [xsp+198h] [xbp-2E8h]
  __int64 *v65; // [xsp+1A0h] [xbp-2E0h]
  __int64 v66; // [xsp+1A8h] [xbp-2D8h]
  __int64 v67; // [xsp+1B0h] [xbp-2D0h]
  vm_address_t v68; // [xsp+1B8h] [xbp-2C8h]
  vm_size_t v69; // [xsp+1C0h] [xbp-2C0h]
  __int64 v70; // [xsp+1C8h] [xbp-2B8h] BYREF
  __int64 *v71; // [xsp+1D0h] [xbp-2B0h]
  __int64 v72; // [xsp+1D8h] [xbp-2A8h]
  __int64 (__fastcall *v73)(); // [xsp+1E0h] [xbp-2A0h]
  __int64 (__fastcall *v74)(); // [xsp+1E8h] [xbp-298h]
  char *v75; // [xsp+1F0h] [xbp-290h]
  __int64 v76; // [xsp+1F8h] [xbp-288h]
  __int64 v77; // [xsp+200h] [xbp-280h]
  __int64 v78; // [xsp+208h] [xbp-278h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 175LL) )
  {
    v6 = (dyld4::RuntimeState *)__chkstk_darwin();
    v70 = 0;
    v71 = &v70;
    v72 = 0x4002000000LL;
    v73 = __Block_byref_object_copy__19;
    v74 = __Block_byref_object_dispose__20;
    v75 = (char *)v49 - (v10 & 0x1FFFFFFFE0LL | 0x10);
    v76 = v11;
    v77 = 0;
    if ( v9 )
    {
      v12 = 0;
      v13 = &v70;
      v14 = v9;
      while ( 1 )
      {
        v15 = v13[5];
        v13[7] = v12 + 1;
        v16 = (_OWORD *)(v15 + 32 * v12);
        *v16 = 0u;
        v16[1] = 0u;
        if ( !--v14 )
          break;
        v13 = v71;
        v12 = v71[7];
        if ( v12 >= v71[6] )
          dyld4::RuntimeState::appendInterposingTuples(v6, v7, v8, v9);
      }
    }
    v17 = &a3[16 * v9];
    v60 = 0;
    v61 = &v60;
    v62 = 0x5002000000LL;
    v63 = __Block_byref_object_copy__21;
    v64 = __Block_byref_object_dispose__22;
    v65 = &v78;
    v66 = 32;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v54 = 0;
    v55 = &v54;
    v56 = 0x3002000000LL;
    v57 = __Block_byref_object_copy__23;
    v58 = __Block_byref_object_dispose__24;
    Diagnostics::Diagnostics((Diagnostics *)&v59);
    v18 = (dyld3::MachOFile *)dyld4::Loader::analyzer(a2, this);
    hasChainedFixups = dyld3::MachOFile::hasChainedFixups(v18);
    v49[0] = (vm_address_t *)&v59;
    v49[1] = (vm_address_t *)v49;
    if ( (hasChainedFixups & 1) != 0 )
    {
      v53[0] = _NSConcreteStackBlock;
      v53[1] = 0x40000000;
      v53[2] = ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke;
      v53[3] = &unk_95708;
      v53[8] = v18;
      v53[9] = a2;
      v53[4] = &v54;
      v53[5] = &v60;
      v53[10] = a3;
      v53[11] = v17;
      v53[6] = &v70;
      v53[7] = this;
      dyld3::MachOAnalyzer::withChainStarts(v18, (Diagnostics *)(v55 + 5), 0, (__int64)v53);
    }
    else
    {
      Address = dyld3::MachOFile::preferredLoadAddress(v18);
      v52[0] = _NSConcreteStackBlock;
      v52[1] = 0x40000000;
      v52[2] = ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_3;
      v52[3] = &unk_95730;
      v52[6] = a3;
      v52[7] = v17;
      v52[4] = &v70;
      v52[5] = v18;
      v52[8] = (char *)v18 - Address;
      v52[9] = a2;
      dyld3::MachOAnalyzer::forEachRebase(v18, v55 + 5, 0, v52);
      v51[0] = _NSConcreteStackBlock;
      v51[1] = 0x40000000;
      v51[2] = ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_4;
      v51[3] = &unk_95758;
      v51[8] = v18;
      v51[9] = a3;
      v51[10] = v17;
      v51[11] = a2;
      v51[4] = &v54;
      v51[5] = &v70;
      v51[6] = &v60;
      v51[7] = this;
      dyld3::MachOAnalyzer::forEachBind(v18, v55 + 5, v51, &__block_literal_global);
    }
    v21 = v71[7];
    if ( v21 )
    {
      v22 = v71[5];
      v23 = v22 + 32 * v21;
      v50 = (char *)this + 160;
      do
      {
        v24 = *(_QWORD *)(v22 + 16);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v22 + 8);
          if ( v25 )
          {
            v26 = *((_QWORD *)this + 18);
            if ( !v26 )
              goto LABEL_21;
            v27 = 0;
            v28 = *((__int64 **)this + 17);
            v29 = 16 * v26;
            do
            {
              if ( v28[1] == v24 )
              {
                v27 = *v28;
                *v28 = v25;
              }
              v28 += 2;
              v29 -= 16;
            }
            while ( v29 );
            if ( v27 )
            {
              v30 = 0;
            }
            else
            {
LABEL_21:
              lsl::Vector<dyld4::InterposeTupleAll>::reserve((char *)this + 128);
              v27 = 0;
              v31 = *((_QWORD *)this + 17);
              v32 = *((_QWORD *)this + 18);
              *((_QWORD *)this + 18) = v32 + 1;
              v33 = (_QWORD *)(v31 + 16 * v32);
              *v33 = v25;
              v33[1] = v24;
              v30 = 1;
            }
            if ( *(_BYTE *)(*((_QWORD *)this + 1) + 186LL) )
            {
              v34 = (const char *)dyld4::Loader::leafName(a2);
              dyld4::RuntimeState::log(
                this,
                "%s has interposed '%s' to replacing binds to 0x%08lX with 0x%08lX\n",
                v34,
                *(const char **)(v22 + 24),
                *(_QWORD *)(v22 + 16),
                *(_QWORD *)(v22 + 8));
            }
            v35 = *(_QWORD *)(v22 + 16);
            lsl::Vector<dyld4::InterposeTupleSpecific>::reserve(v50, *((_QWORD *)this + 22) + 1LL);
            v36 = *((_QWORD *)this + 21);
            v37 = *((_QWORD *)this + 22);
            *((_QWORD *)this + 22) = v37 + 1;
            v38 = (_QWORD *)(v36 + 24 * v37);
            *v38 = a2;
            v39 = v38 + 1;
            if ( (v30 & 1) != 0 )
            {
              *v39 = v35;
              *(_QWORD *)(v36 + 24 * v37 + 16) = v35;
            }
            else
            {
              *v39 = v27;
              *(_QWORD *)(v36 + 24 * v37 + 16) = v35;
              if ( *(_BYTE *)(*((_QWORD *)this + 1) + 186LL) )
                dyld4::RuntimeState::log(
                  this,
                  "   '%s' was previously interposed, so chaining 0x%08lX to call through to 0x%08lX\n",
                  *(const char **)(v22 + 24),
                  *(_QWORD *)(v22 + 8),
                  v27);
            }
            v40 = v61[7];
            if ( v40 )
            {
              v41 = (_QWORD *)v61[5];
              v42 = 16 * v40;
              do
              {
                if ( v41[1] == *(_QWORD *)(v22 + 16) )
                {
                  v43 = *(_QWORD *)(v22 + 8);
                  v44 = *v41;
                  lsl::Vector<dyld4::InterposeTupleAll>::reserve((char *)this + 128);
                  v45 = *((_QWORD *)this + 17);
                  v46 = *((_QWORD *)this + 18);
                  *((_QWORD *)this + 18) = v46 + 1;
                  v47 = (_QWORD *)(v45 + 16 * v46);
                  *v47 = v43;
                  v47[1] = v44;
                  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 186LL) )
                  {
                    v48 = (const char *)dyld4::Loader::leafName(a2);
                    dyld4::RuntimeState::log(
                      this,
                      "%s has interposed '%s' so need to patch cache uses of 0x%08lX\n",
                      v48,
                      *(const char **)(v22 + 24),
                      *v41);
                  }
                }
                v41 += 2;
                v42 -= 16;
              }
              while ( v42 );
            }
          }
        }
        v22 += 32;
      }
      while ( v22 != v23 );
    }
    _Block_object_dispose(&v54, 8);
    Diagnostics::~Diagnostics(v49[0]);
    _Block_object_dispose(&v60, 8);
    v67 = 0;
    if ( v68 )
      vm_deallocate(mach_task_self_, v68, v69);
    _Block_object_dispose(&v70, 8);
  }
}
